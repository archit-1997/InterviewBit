int Solution::nTriang(vector<int> &A) {
    int n=A.size(),ans=0;
    int mod=1000000007;
    sort(A.begin(),A.end());
    for(int i=n-1;i>=2;i--){
        int l=0,r=i-1;
        while(l<r){
            int sum=A[l]+A[r];
            if(sum>A[i]){
                ans=(ans+(r-l)%mod)%mod;
                r--;
            }
            else
                l++;
        }
    }
    return ans;
}
