int Solution::solve(int A, vector<int> &B) {
  int n = A;
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += B[i];

  if (sum % 3 != 0)
    return 0;

  int ans = 0;
  int ls = 0;
  for (int i = 0; i < n - 2; i++) {
    ls += B[i];
    if (ls == (sum / 3)) {
      int ms = 0, rs = sum - ls;
      for (int j = i + 1; j < n - 1; j++) {
        ms += B[j];
        rs -= B[j];

        if (ms == (sum / 3) && ms == rs)
          ans++;
      }
    }
  }

  return ans;
}
