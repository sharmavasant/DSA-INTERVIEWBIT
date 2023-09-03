long Solution::solve(int A, int B) {
    long long int x = A;
    for(int i=1;i<B;i++) {
        if(x%2 == 0) {
            x = x/2;
        }
        else {
            x = 3*x+1;
        }
    }
    return x;
}
