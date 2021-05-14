
vector<int> Solution::searchRange(const vector<int> &A, int B) {
  int n = A.size();

  // check whether the element is present in the array or not
  int low = lower_bound(A.begin(), A.end(), B) - A.begin();
  vector<int> ans;
  if (low > n || A[low] != B) {
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
  }

  ans.push_back(low);

  int high = upper_bound(A.begin(), A.end(), B) - A.begin();
  high--;
  ans.push_back(high);

  return ans;
}
