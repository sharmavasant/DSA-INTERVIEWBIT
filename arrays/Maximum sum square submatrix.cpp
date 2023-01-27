int maxsum(vector<int>&row,int B){
    int n = row.size();
    int i=0,j=0;
    int su  = 0;
    int ans = INT_MIN;
    while(j<n){
        su+=row[j];
        if(j-i+1==B){
            ans = max(ans,su);
            su -= row[i];
            i++;
        }
        j++;
    }
    return ans;
}

int Solution::solve(vector<vector<int> > &A, int B) {
    int n = A.size();
    int ans = INT_MIN;
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++)
            A[i][j] += A[i-1][j];
    }
    for(int i=0;i<n-B+1;i++){
        vector<int>row(n,0);
        for(int j=0;j<n;j++){
            if(i==0){
                row[j] = A[i+B-1][j];
            }
            else 
                row[j] = A[i+B-1][j] - A[i-1][j];
        }
        int temp = maxsum(row,B);
        ans = max(ans,temp);
    }
    return ans;
}
// 1 1 1
// 1 1 1
// 1 1 1

// 0 0 0
// 1 1 1
// 2 2 2
// 3 3 3





