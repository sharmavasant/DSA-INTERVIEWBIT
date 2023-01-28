int Solution::solve(string A) {
    int n=A.size();
    string word="";
    int ans=0, c=0;
    for(auto x:A){
        if(x==' '){
            int len=word.size();
            for(int i=0;i<len;i++){
                if(word[i]==word[len-1-i]){
                    c++;
                }
            }
            if(c==len){
                ans++;
            }
            c=0;
            word="";
        }
        else{
            word=word+x;
        }
    }
    int len=word.size();
            for(int i=0;i<len;i++){
                if(word[i]==word[len-1-i]){
                    c++;
                }
            }
            if(c==len){
                ans++;
            }
    return ans;
}
