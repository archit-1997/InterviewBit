
int Solution::solve(vector<int> &A, int B) {
    int ans=upper_bound(A.begin(),A.end(),B)-A.begin();
    return ans;
}
