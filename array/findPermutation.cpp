vector<int> Solution::findPerm(const string A, int B) {
    vector<int> ans(B);
    int left=1,right=B;
    for(int i=0;i<B-1;i++){
        if(A[i]=='I')
            ans[i]=left++;
        else
            ans[i]=right--;
    }
    
    ans[B-1]=left;
    return ans;
}
