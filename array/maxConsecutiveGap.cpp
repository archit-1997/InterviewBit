int Solution::maximumGap(const vector<int> &A) {
  int n = A.size();
  if (n < 2)
    return 0;
  int big = *max_element(A.begin(), A.end());
  int small = *min_element(A.begin(), A.end());

  // now we need to find the average length of a gap
  // average length of interval=length of the interval/no of intervals
  // here gap and interval mean the same thing
  // and for n numbers, there are n-1 gaps
  int num_interval = n - 1;
  int avginterval_size = (big - small) / (num_interval);
  // suppose the interval is 2.33, this will yield as 2, but answer will be
  // atleast three, so taking the greatest integer
  if ((big - small) % (num_interval) != 0)
    avginterval_size++;

  // now we will put the elements of the array into buckets
  // there will always be n-1 buckets
  // number of buckets is taken n-1 becuase we are following pigeon hole
  // principle here number of buckets is always equal to the number of intervals
  // and not interval size

  vector<int> smallest(num_interval, INT_MAX), largest(num_interval, -1);
  // while inserting the elements into the bucket, we will not insert the min
  // and max elements into any of the buckets becuase this will effect our
  // largest and smallest values at the first and last index although it's of no
  // use assigning each element into its bucket
  for (int i = 0; i < n; i++) {
    if (A[i] != small && A[i] != big) {
      // formula to find the index bucket for each element
      int index = (A[i] - small) / avginterval_size;
      // now find the largest and the smallest element for each bucket
      smallest[index] = min(smallest[index], A[i]);
      largest[index] = max(largest[index], A[i]);
    }
  }

  int ans = INT_MIN;
  int prev = small;
  for (int i = 0; i < num_interval; i++) {
    // we don't want to process the empty buckets
    if (largest[i] == -1)
      continue;
    ans = max(ans, smallest[i] - prev);
    prev = largest[i];
  }
  ans = max(big - prev);
  return ans;
}
