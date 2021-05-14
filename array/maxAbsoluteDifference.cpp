int Solution::maxArr(vector<int> &A) {
  int n = A.size();
  int big_sum = INT_MIN, small_sum = INT_MAX, big_diff = INT_MIN,
      small_diff = INT_MAX;

  vector<int> sum(n), diff(n);
  for (int i = 0; i < n; i++) {
    sum[i] = A[i] + i;
    diff[i] = A[i] - i;
  }

  // storing the max and the min values
  for (int i = 0; i < n; i++) {
    big_sum = max(big_sum, sum[i]);
    small_sum = min(small_sum, sum[i]);

    big_diff = max(big_diff, diff[i]);
    small_diff = min(small_diff, diff[i]);
  }

  int v1 = big_sum - small_sum;
  int v2 = big_diff - small_diff;

  int ans = max(v1, v2);

  return ans;
}
