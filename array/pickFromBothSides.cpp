
int Solution::solve(vector<int> &A, int B) {
  int ans = 0, n = A.size();
  for (int i = 0; i < B; i++)
    ans += A[i];
  int left = B - 1, right = n - 1;
  int val = ans;
  while (left >= 0) {
    val = val - A[left] + A[right];
    left--, right--;
    ans = max(ans, val);
  }
  return ans;
}
