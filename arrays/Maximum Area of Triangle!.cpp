int Solution::solve(vector<string> &A) {
    int n=A[0].size();
    int n1=A.size();
    int b1=-1,b2=-1,i=0,flag=0,flag1=0,l;
    for(int i=0;i<n;i++){
        for(int j=0;j<n1;j++){
            for(int k=n1-1;k>=0;k--){
                if(A[j][i]!=A[k][i]){
                    b1=j;
                    b2=k;
                    l=i;
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(b1=-1&&b2==-1){
        return 0;
    }
    int base=1+(b2-b1);
    int h1=-1;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n1;j++){
            if(A[j][i]!=A[b1][l]&&A[j][i]!=A[b2][l]){
                h1=i;
                flag1=1;
                break;
            }
        }
        if(flag1==1){
            break;
        }
    }
    if(h1==-1){
        return 0;
    }
    int height=1+(h1-l);
    int area=(base*height)*(0.5);
    return area;
}
