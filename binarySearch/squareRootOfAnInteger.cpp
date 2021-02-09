
int Solution::sqrt(int A) {
    if(A==0 || A==1)
        return A;
    
    int ans,low=0,high=A;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid<= A/mid){
            low=mid+1;
            ans=mid;
        }
        else
            high=mid-1;
    }
    
    return ans;
}
