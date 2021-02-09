
int Solution::isPalindrome(string A) {
    
    vector<int> s,rev;
    int n=A.size();
    
    for(int i=0;i<n;i++){
        int ch=A[i];
        //capital letters are from 65 to 90
        //we will convert every letter to small one
        if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
            if(ch>=65 && ch<=90)
                ch=ch+32;
            s.push_back(ch);
        }
        else if(ch>=48 && ch<=57){
            s.push_back(ch);
        }
        else 
            continue;
    }
    
    rev=s;
    reverse(rev.begin(),rev.end());
    
    for(int i=0;i<s.size();i++){
        if(s[i]!=rev[i])
            return 0;
    }
    
    return 1;
}
