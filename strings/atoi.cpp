//time complexity o(n), space complexity o(1)
//first of all checking if string contains blank spaces
//at the beginning
//then checking if the new string contains minus sign before first digit
//if it contains minus sign then we store it in new variable 'sign' 
//then we traverse the remaining string from next index
//otherwise we traverse from first index
//now we fulfill all the conditions mentioned in the question
//and we stop if we encounter any blank space or if the element is not digit
//and we store all these elements in a 'ans' variable
//at the end we check 'sign' is minus or not and if it is then we return 
//ans with multiplying -1 to it else as it is.
int Solution::atoi(const string A) {
    if(A.size()==0) return 0;
    int i1=0;
    while(i1<A.size()&&A[i1]==' '){
        i1++;
    }
    //A=A.substr(i);
    int sign=+1;
    long int ans=0;
    if(A[0]=='-') sign=-1;
    int MAX=INT_MAX, MIN=INT_MIN;
    int i=(A[i1]=='+'||A[i1]=='-')?1:0;
    while(i<A.size()){
        if(A[0]==' '||!isdigit(A[i])) break;
        ans=ans*10+(A[i]-'0');
        if(sign==-1&&-1*ans<MIN) return MIN;
        if(sign==1&&ans>MAX) return MAX;
        i++;
    }
    return (int)(sign*ans);
}
