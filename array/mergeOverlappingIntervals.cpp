/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool compare(Interval &a, Interval &b) { return a.start < b.start; }

vector<Interval> Solution::merge(vector<Interval> &v) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details

  sort(v.begin(), v.end(), compare);
  int n = v.size();
  vector<Interval> ans;
  for (int i = 0; i < n - 1; i++) {
    if (v[i].end >= v[i + 1].start) {
      // we keep on going forward with the proper values
      v[i + 1].start = min(v[i].start, v[i + 1].start);
      v[i + 1].end = max(v[i].end, v[i + 1].end);
    } else
      ans.push_back(v[i]);
  }

  // push the last pair
  ans.push_back({v[n - 1].start, v[n - 1].end});

  return ans;
}
