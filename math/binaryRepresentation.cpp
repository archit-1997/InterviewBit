string Solution::findDigitsInBinary(int A) {
  if (A == 0)
    return "0";

  string ans;
  while (A != 0) {
    int rem = A % 2;
    A /= 2;
    ans = ans + to_string(rem);
  }

  reverse(ans.begin(), ans.end());

  return ans;
}
