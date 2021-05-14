
vector<int> Solution::maxone(vector<int> &v, int b) {
  int n = v.size();
  vector<int> zero;
  int index = -1;
  int l = 0, r = 0, count = 0;
  int left = 0, right = 0;
  vector<int> ans;
  int len = INT_MIN;
  while (l <= r && r < n) {
    while (r < n) {
      if (v[r] == 0) {
        zero.push_back(r);
        count++;
      }
      // now we have to exclude this zero
      if (count > b)
        break;
      // move on to the next number
      r++;
    }
    // update the max length which is possible
    if (r - l > len) {
      len = r - l;
      left = l, right = r;
    }
    // if we have reached the end, then you can just break from the loop
    if (r == n && count <= b)
      break;
    // take out the leftmost zero
    index++;
    while (l != zero[index])
      l++;
    l++, r++;
    count--;
  }
  if (len == INT_MIN)
    return ans;
  for (int i = left; i < right; i++)
    ans.push_back(i);
  return ans;
}
