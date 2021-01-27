vector<int> Solution::flip(string A) {
    int n=A.size();
    vector<int> v;
    int czero=0;
    for(int i=0;i<n;i++){
        int num=A[i]-'0';
        if(num==0){
            czero=1;
            v.push_back(1);
        }
        else
            v.push_back(-1);
    }
    
    //now perform all the operations on the v vector
    int msf=INT_MIN,meh=0,start=0,end=0,beg=0;
    for(int i=0;i<n;i++){
        meh+=v[i];
        //make meh as 0 if it is negative and empty the subarray
        if(meh<0){
            meh=0;
            beg=i+1;
        }
        if(msf<meh){
            msf=meh;
            start=beg,end=i;
        }
    }
    vector<int> ans;
    if(czero==0)
        return ans;
    ans={start+1,end+1};
    return ans;
}
