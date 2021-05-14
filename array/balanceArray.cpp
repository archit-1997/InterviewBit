int Solution::solve(vector<int> &nums) {
  int righteven = 0;
  int rightodd = 0;
  int lefteven = 0;
  int leftodd = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      righteven += nums[i];
    else
      rightodd += nums[i];
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      righteven -= nums[i];
    else
      rightodd -= nums[i];
    if (lefteven + rightodd == leftodd + righteven)
      count++;
    if (i % 2 == 0)
      lefteven += nums[i];
    else
      leftodd += nums[i];
  }
  return count;
}
