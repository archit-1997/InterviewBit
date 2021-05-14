vector<int> Solution::maxset(vector<int> &A) {

  vector<int> ans;
  vector<int> temp;
  int n = A.size();
  // in problems like these, the sum variable should be kept in mind that
  // whether we should take it as long or not
  long sum = -1, temp_sum = 0;
  for (int i = 0; i < n; i++) {
    if (A[i] >= 0) {
      temp.push_back(A[i]);
      temp_sum += A[i];
      if (temp_sum > sum) {
        sum = temp_sum;
        ans = temp;
      } else if (temp_sum == sum) {
        if (temp.size() > ans.size())
          ans = temp;
      }
    } else {
      temp.clear();
      temp_sum = 0;
    }
  }
  return ans;
}
