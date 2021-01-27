string Solution::convertToTitle(int A) {
    
    string ans="";
    while(A>0){
        int r=A%26;
        int q=A/26;
        
        if(r==0){
            ans=ans+'Z';
            q--;
        }
        else{
            char ch=64+r;
            ans=ans+ch;
        }
        A=q;
    }
    
    reverse(ans.begin(),ans.end());
    
    return ans;
    
}
