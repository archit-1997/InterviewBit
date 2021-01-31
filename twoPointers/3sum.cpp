
int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    long long int ans=0,mindiff=INT_MAX;
    long long int n=A.size();
    if(n==3){
        return A[0]+A[1]+A[2];
    }
    
    for(long long int i=0;i<n-2;i++){
        long long int l=i+1,r=n-1;
        while(l<r){
            long long int sum=A[i]+A[l]+A[r];
            long long int diff=abs(sum-B);
            if(diff<mindiff){
                mindiff=diff;
                ans=sum;
            }
            
            if(sum<B)
                l++;
            else
                r--;
        }
    }
    
    return ans;
}
