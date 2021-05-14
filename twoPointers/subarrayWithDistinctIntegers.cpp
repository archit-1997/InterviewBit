int atMostK(vector<int> A, int B) {
  if (B == 0)
    return 0;
  // you have to find the number of subarrays with atmost k distinct integers
  unordered_map<int, int> hash;
  int n = A.size();

  int l = 0, r = 0, count = 0, ans = 0, len;

  while (r < n) {
    hash[A[r]]++;
    if (hash[A[r]] == 1)
      count++;

    if (count > B) {
      // len=r-l;
      // ans+=((len*(len+1))/2);
      while (count > B) {
        if (hash[A[l]] == 1)
          count--;
        hash[A[l]]--;
        l++;
      }
    }
    ans += (r - l + 1);
    r++;
  }
  // len=r-l;
  // ans+=((len*(len+1))/2);

  return ans;
}

int Solution::solve(vector<int> &A, int B) {
  int a = atMostK(A, B), b = atMostK(A, B - 1);
  // cout<<a<<" "<<b<<"\n";
  return a - b;
}
