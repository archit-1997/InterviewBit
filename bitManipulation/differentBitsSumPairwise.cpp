
int Solution::cntBits(vector<int> &nums) {
  long long int ans = 0, n = nums.size();
  int mod = 1e9 + 7;
  for (int i = 0; i < 32; i++) {
    int count = 0, val = 1 << i;
    for (int j = 0; j < nums.size(); j++) {
      if (nums[j] & val)
        count++;
    }
    ans += (count) * (n - count) * 2;
    ans %= mod;
  }

  return ans;
}
