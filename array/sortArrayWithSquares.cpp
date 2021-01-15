vector<int> Solution::solve(vector<int> &A) {
    int n=A.size();
    vector<int> ans(n);
    int l=0,r=n-1;
    for(int i=n-1;i>=0;i--){
        if(abs(A[l])>abs(A[r])){
            ans[i]=A[l]*A[l];
            l++;
        }
        else{
            ans[i]=A[r]*A[r];
            r--;
        }
    }
    return ans;
}
