
int Solution::singleNumber(const vector<int> &A) {
    int n=A.size();
    int ans=0;
    for(int i=0;i<32;i++){
        int count=0,val=1<<i;
        for(int j=0;j<n;j++){
            if(A[j]&val)
                count++;
        }
        if(count%3!=0)
            ans+=pow(2,i);
    }
    return ans;
}
