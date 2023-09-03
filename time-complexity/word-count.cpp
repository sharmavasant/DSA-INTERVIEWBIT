int Solution::solve(string A) {
    int count = 0;
    for(int i=0;i<A.size();i++) {
        if((i == 0 && A[i] != ' ') || (A[i-1] == ' ' && A[i] != ' ' )) count++;
    }
    return count;
}
