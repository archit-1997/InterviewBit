int Solution::solve(vector<int> &A) {

  int a = *max_element(A.begin(), A.end());
  int b = *min_element(A.begin(), A.end());

  return (a + b);
}
