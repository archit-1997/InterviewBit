vector<int> Solution::subUnsort(vector<int> &A) {
  int n = A.size();
  // to check whether the array is already sorted or not
  int flag = 0;
  int left, right;
  // l-r find the first element which is greater than the next element
  for (int i = 0; i < n - 1; i++) {
    if (A[i] > A[i + 1]) {
      left = i;
      flag = 1;
      break;
    }
  }
  // if the array is already sorted
  if (flag == 0) {
    vector<int> ans = {-1};
    return ans;
  }
  // r-l find the first element which is smaller than the next element
  for (int i = n - 1; i >= 1; i--) {
    if (A[i] < A[i - 1]) {
      right = i;
      break;
    }
  }

  // find the greatest and the smallest element in the range left to right
  int big = INT_MIN, small = INT_MAX;
  for (int i = left; i <= right; i++) {
    big = max(big, A[i]);
    small = min(small, A[i]);
  }
  // check whether we can any further left
  while (left > 0 && small < A[left - 1])
    left--;

  while (right < n - 1 && big > A[right + 1])
    right++;

  vector<int> ans = {left, right};

  return ans;
}
