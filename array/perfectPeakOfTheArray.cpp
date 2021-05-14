int Solution::perfectPeak(vector<int> &A) {
  int n = A.size();
  vector<int> left(n, 0), right(n, 0);

  // fill the left array
  int big = A[0];
  for (int i = 1; i < n; i++) {
    if (A[i] > big) {
      left[i] = 1;
      big = A[i];
    }
  }

  // fill the right array
  int small = A[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    if (A[i] < small) {
      right[i] = 1;
      if (left[i] == 1)
        return 1;
      small = A[i];
    }
  }

  return 0;
}
