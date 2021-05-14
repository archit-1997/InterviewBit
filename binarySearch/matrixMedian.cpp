
int Solution::findMedian(vector<vector<int>> &A) {
  int r = A.size(), c = A[0].size();

  // find the min and max element of the matrix
  int big = INT_MIN, small = INT_MAX;

  for (int i = 0; i < r; i++) {
    small = min(small, A[i][0]);
    big = max(big, A[i][c - 1]);
  }

  int low = small, high = big;
  int req = (r * c + 1) / 2;
  while (low < high) {
    int sum = 0;
    int mid = low + (high - low) / 2;
    for (int i = 0; i < r; i++) {
      vector<int> v = A[i];
      sum += (upper_bound(v.begin(), v.end(), mid) - v.begin());
    }

    if (sum < req)
      low = mid + 1;
    else
      high = mid;
  }

  return low;
}
