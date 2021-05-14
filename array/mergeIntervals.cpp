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

vector<Interval> Solution::insert(vector<Interval> &intervals,
                                  Interval newInterval) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details
  vector<Interval> ans;
  if (intervals.size() == 0) {
    intervals.push_back(newInterval);
    return intervals;
  }

  intervals.push_back(newInterval);

  sort(intervals.begin(), intervals.end(), compare);

  int n = intervals.size();
  int start = newInterval.start, end = newInterval.end;
  // now we will rearrange the tables
  for (int i = -0; i < n - 1; i++) {
    if (intervals[i].end > intervals[i + 1].start) {
      intervals[i + 1].start = intervals[i].start;
      intervals[i + 1].end = max(intervals[i].end, intervals[i + 1].end);
    } else
      ans.push_back(intervals[i]);
  }

  ans.push_back(intervals[n - 1]);

  return ans;
}

// another approach is listed below
//

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

vector<Interval> Solution::insert(vector<Interval> &v, Interval newInterval) {
  int n = v.size();
  int start = newInterval.start, end = newInterval.end;

  // for checking whether we have inserted the given interval or not
  int flag = 0;
  vector<Interval> ans;

  for (int i = 0; i < n; i++) {
    // if it lies to the left of the given interval
    if (end < v[i].start) {
      // here you need to check whether the interval has been inserted or not
      if (flag == 0) // if the interval has not been inserted
        ans.push_back({start, end});
      ans.push_back(v[i]);
      flag = 1;
    } else if (start > v[i].end)
      ans.push_back(v[i]);
    else {
      // overlapping condition
      start = min(start, v[i].start);
      end = max(end, v[i].end);
    }
  }

  // check whether the interval has been inserted or not
  if (flag == 0)
    ans.push_back({start, end});

  return ans;
}
