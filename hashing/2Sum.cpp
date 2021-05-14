
vector<int> Solution::twoSum(const vector<int> &A, int B) {
  map<int, vector<int>> hash;
  int n = A.size();
  vector<int> ans;
  for (int i = 0; i < A.size(); i++) {
    int rem = B - A[i];
    vector<int> v = hash[rem];
    if (v.size() != 0) {
      // we have found an answer
      int l = v[0], r = i;
      ans.push_back(l + 1);
      ans.push_back(r + 1);
      return ans;
    }
    hash[A[i]].push_back(i);
  }

  return ans;
}
