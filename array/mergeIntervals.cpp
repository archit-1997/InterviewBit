/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

bool compare(Interval &a, Interval &b){
    if(a.start==b.start)
        return a.end<b.end;
    return a.start<b.start;
}

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(),compare);
    int n=intervals.size();
    int start=intervals[0].start,end=intervals[0].end;
    vector<Interval> ans;
    for(int i=1;i<n;i++){
        if(intervals[i].start<=end){
                end=max(end,intervals[i].end);
            }
            else{
                newInterval.start=start,newInterval.end=end;
                ans.push_back(newInterval);
                start=intervals[i].start,end=intervals[i].end;
            }
    }
    newInterval.start=start,newInterval.end=end;
    ans.push_back(newInterval);
    return ans;
}
