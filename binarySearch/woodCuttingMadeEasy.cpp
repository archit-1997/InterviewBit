
long long int find(vector<int> &A, int h){
    long long int ans=0,n=A.size();
    for(int i=n-1;i>=0;i--){
        if(A[i]-h<=0)
            break;
        ans+=(A[i]-h);
    }
    return ans;
}

int Solution::solve(vector<int> &A, int B) {
    long long int n=A.size();
    long long int ans=INT_MIN;
    sort(A.begin(),A.end());
    //the min and max height at which we can make the cut
    long long int low=0,high=A[n-1];
    while(low<=high){
        long long int mid=low+(high-low)/2;
        
        long long int len=find(A,mid);
        
        if(len==B)
            return mid;
        
        if(len>B){
            ans=max(ans,mid);
            low=mid+1;
        }
        else
            high=mid-1;
    }
    
    return ans;
}
