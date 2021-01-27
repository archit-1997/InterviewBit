int Solution::hammingDistance(const vector<int> &A) {
    
    long n=A.size();
    
    long  ans=0;
    
    for(int i=0;i<32;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(A[j] & (1<<i))
                count++;
        }
         ans+=((count)*(n-count)*2);
    }
    
    return ans%1000000007;
    
}
