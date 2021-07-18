int Solution::maxSubArray(const vector<int> &A) {
    int msf=INT_MIN,meh=0;
    for(int i=0;i<A.size();i++){
        meh+=A[i];
        msf=max(msf,meh);
        if(meh<0)
            meh=0;
    }
    return msf;
}
