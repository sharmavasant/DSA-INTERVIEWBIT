vector<int> Solution::solve(string A) {
    string integer;
    stringstream ss(A);
    vector<int> ans;
    while(getline(ss,integer,',')) {
        int num = stoi(integer);
        ans.push_back(num);
    }
    return ans;
}
