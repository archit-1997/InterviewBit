#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  int b;
  cin >> b;

  vector<int> zero;
  int index = -1;
  int l = 0, r = 0, count = 0;
  int ans = INT_MIN;
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
    ans = max(ans, r - l);
    // if we have reached the end, the you can just break from the loop
    if (r == n && count <= b)
      break;
    // take out the leftmost zero
    index++;
    while (l != zero[index])
      l++;
    l++, r++;
    count--;
  }

  cout << ans;

  return 0;
}
