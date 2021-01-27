int Solution::maxSubArray(const vector<int> &A) {
    
    int meh=0,msf=INT_MIN,n=A.size();
    
    for(int i=0;i<n;i++){
        meh+=A[i];
        msf=max(msf,meh);
        if(meh<0)
            meh=0;
    }
    
    return msf;
    
    
}
