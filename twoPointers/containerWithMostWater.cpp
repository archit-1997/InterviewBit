
int Solution::maxArea(vector<int> &A) {
  int ans = INT_MIN, n = A.size();

  if (n == 1)
    return 0;

  int l = 0, r = n - 1;
  while (l < r) {
    int len = min(A[l], A[r]), bre = r - l;
    int area = len * bre;
    ans = max(ans, area);
    if (A[l] <= A[r])
      l++;
    else
      r--;
  }

  return ans;
}
