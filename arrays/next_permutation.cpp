vector<int> Solution::nextPermutation(vector<int> &A) {
    int n=A.size();
    int index1=-1,index2=-1;
    //to find place for next greater number
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            index1=i;
            break;
        }
    }
    //if the arrays given are already arranged in greatest order
    if(index1==-1){
        reverse(A.begin(),A.end());
        return A;
    }
    //to make next greatest number
    for(int i=n-1;i>index1;i--){
        if(A[i]>A[index1]){
            index2=i;
            break;
        }
    }
    swap(A[index1],A[index2]);
    reverse(A.begin()+index1+1,A.end());
    return A;
}
