int Solution::solve(vector<int> &A) {
  int n = A.size();
  map<int, int, greater<int>> m;

  for (int i = 0; i < n; i++)
    m[A[i]]++;

  int count = 0;
  for (auto it = m.begin(); it != m.end(); it++) {
    int num = it->first, val = it->second;

    if (count == num)
      return 1;
    count += val;
  }
  return -1;
}
