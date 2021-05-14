int Solution::solve(int A, int B, int C, int D) {
  vector<int> v = {A, B, C, D};
  sort(v.begin(), v.end());

  if (A == B && C == D)
    return 1;
  return 0;
}
