bool compare(int &a, int &b) {

  string x = to_string(a), y = to_string(b);
  return ((x + y) > (y + x));
}

string Solution::largestNumber(const vector<int> &A) {
  vector<int> v = A;
  int n = v.size();
  // check if all the elements are 0 ?
  int flag = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] != 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    return "0";
  sort(v.begin(), v.end(), compare);
  string ans;
  for (int i = 0; i < n; i++) {
    ans += (to_string(v[i]));
  }

  return ans;
}
