int Solution::lengthOfLastWord(const string A) {
    string word="";
    int flag=0;
    for(auto itr=A.rbegin();itr!=A.rend();++itr){
        if((*itr)!=' '){
            word=word+(*itr);
            flag=1;
        }
        else if((*itr)==' '){
            if(flag==1){
                break;
            }
        }
    }
    int ans=word.size();
    return ans;
}
