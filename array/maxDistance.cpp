int Solution::maximumGap(const vector<int> &A) {
    int n=A.size();
    vector<int> left(n),right(n);
    
    //filling from left and taking the smallest element
    int small=A[0];
    left[0]=small;
    for(int i=1;i<n;i++){
        small=min(small,A[i]);
        left[i]=small;
    }
    
    //filling from right and taking the largest element
    int big=A[n-1];
    right[n-1]=big;
    for(int i=n-2;i>=0;i--){
        big=max(big,A[i]);
        right[i]=big;
    }
    int ans=0;
    int i=0,j=0;
    while(i<n && j<n){
        if(left[i]<=right[j]){
            ans=max(ans,j-i);
            j++;
        }
        else
            i++;
    }
    
    return ans;
    
}
