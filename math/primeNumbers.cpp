vector<int> Solution::sieve(int A) {

  vector<int> prime(A + 1, 1);
  prime[0] = 0, prime[1] = 0;

  for (int i = 2; i * i <= A; i++) {
    if (prime[i]) {
      for (int j = i * i; j <= A; j += i)
        prime[j] = 0;
    }
  }

  vector<int> ans;
  for (int i = 2; i <= A; i++) {
    if (prime[i])
      ans.push_back(i);
  }

  return ans;
}
