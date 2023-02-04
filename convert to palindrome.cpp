int Solution::solve(string A) {
    int n=A.size();
    string word="";
    int index1=-1, index2=-1;
    for(int i=0;i<=n/2;i++){
        if(A[i]!=A[n-1-i]){
            index1=i;
            index2=n-1-i;
            break;
        }
    }
    string word1="", word2="";
    for(int i=0;i<n;i++){
        if(i!=index1){
            word1+=A[i];
        }
        if(i!=index2){
            word2+=A[i];
        }
    }
    int n1=word1.size();
    int n2=word2.size();
    int c1=0;
    int c2=0;
    for(int i=0;i<n1/2;i++){
        if(word1[i]!=word1[n1-1-i]){
            c1++;
            break;
        }
    }
    for(int i=0;i<n2/2;i++){
        if(word2[i]!=word2[n2-1-i]){
            c2++;
            break;
        }
    }
    if(c1>0&&c2>0){
        return 0;
    }
    return 1;
}
