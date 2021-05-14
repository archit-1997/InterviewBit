string Solution::solve(int A) {

  // base case
  if (A == 1)
    return "1";

  vector<int> ans;

  // fill the number in the ans array
  int rep = A;
  int len = 0;
  while (rep != 0) {
    ans.push_back(rep % 10);
    rep /= 10;
  }

  A--;
  while (A != 1) {
    int sum = 0, carry = 0;
    for (int i = 0; i < ans.size(); i++) {
      sum = (A * ans[i]) + carry;
      ans[i] = sum % 10;
      carry = sum / 10;
    }
    while (carry != 0) {
      ans.push_back(carry % 10);
      carry /= 10;
    }
    A--;
  }

  string res;
  reverse(ans.begin(), ans.end());
  for (int i = 0; i < ans.size(); i++)
    res = res + to_string(ans[i]);

  return res;
}
