vector<int> Solution::solve(string A) {
    vector<int> arr(26, 0);
    for(int i=0;i<A.size();i++){
        int k = A[i]-97;
        arr[k]++;
    }
    return arr;
}
