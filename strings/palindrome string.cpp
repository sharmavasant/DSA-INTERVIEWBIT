int Solution::isPalindrome(string A) {
    int n=A.size();
    //making a empty string
    string word="";
    //storing only alpha numeric values in empty string
    for(int i=0;i<n;i++){
        if(isalpha(A[i])){
            word+=A[i];
        }
        else if(isdigit(A[i])){
            word+=A[i];
        }
    }
    int len=word.size();
    //changing uppercase to lowercase
    for(int i=0;i<len;i++){
        word[i]=tolower(word[i]);
    }
    int c=0;
    //checking if the string is palindrome or not
    for(int i=0;i<len/2;i++){
        if(word[i]!=word[len-1-i]){
            return 0;
        }
    }
    return 1;
}
