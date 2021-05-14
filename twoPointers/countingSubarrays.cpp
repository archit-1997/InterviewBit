int Solution::solve(vector<int> &A, int B) {
  int n = A.size();
  int sum = 0, i = 0;
  int ans = 0;
  for (int j = 0; j < n; j++) {
    sum += A[j];
    while (sum >= B)
      sum -= A[i++];
    ans += (j - i + 1);
  }
  return ans;
}
