int Solution::solve(string A, int B) {
    int ans = INT_MIN;
    for(int i=0;i<A.size();i+=B){
        string s = A.substr(i,B);
        int t=0;
        for(auto it:s){
            if(it=='a'){
                t++;
            }
        }
        ans = max(ans, t);
    }
    return ans;
}
