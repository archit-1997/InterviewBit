string Solution::longestCommonPrefix(vector<string> &A) {
    string ans="";
    int n=A.size();
    //we need to find the length of the min string
    int len=INT_MAX;
    for(int i=0;i<n;i++){
        string str=A[i];
        if(len>str.size())
            len=str.size();
    }
        
    for(int j=0;j<len;j++){
        char ch=A[0][j];
        for(int i=1;i<n;i++){
            string str=A[i];
            char comp=str[j];
            if(comp!=ch)
                return ans;
        }
        ans=ans+ch;
    }
    
    return ans;
}
