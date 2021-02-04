
int Solution::solve(vector<int> &A) {
    int n=A.size();
    int ans=0;
    for(int i=0;i<n;i++){
        int f=(i+1)*(n-i);
        if(f%2)
            ans=ans^A[i];
    }
    return ans;
}
