int Solution::titleToNumber(string A) {
    
    int ans=0;
    reverse(A.begin(),A.end());
    int n=A.size();
    for(int i=0;i<n;i++){
        int num=((int)A[i])-64;
        ans=pow(26,i)*num+ans;
    }
    
    return ans;
    
}
