long Solution::solve(string A) {
    long long res = 0;
    long long ans = 0;
    string s = "";
    for(auto x:A) {
        if(isdigit(x)) s+=x;
        else {
            for(int i=0;i<s.size();i++) {
                ans = ans*10+(s[i]-'0');
            }
            res += ans;
        ans = 0;
        s = "";
        }
    }
    if(s.size()>0) {
        for(int i=0;i<s.size();i++) {
            ans = ans*10+(s[i]-'0');
        }
        res += ans;
    }
    return res;
}
