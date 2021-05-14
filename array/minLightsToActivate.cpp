int Solution::solve(vector<int> &A, int B) {
  int n = A.size();
  if (B >= n)
    return 1;

  int i = 0, t = 0, ans = 0;
  while (i < n) {
    int flag = 0;
    for (int x = i + B - 1; x >= t; x--) {
      // x stores the range in which we have to search for a valid light
      if (A[x] == 1) {
        flag = 1;
        ans++;

        t = x + 1; // stores the next position from which we can take a light

        i = x + B; // incremeneny by B as before that x+B-1 will have light
        break;
      }
    }

    if (i >= n)
      return ans;
    if (!flag)
      return -1;
  }

  return ans;
}
