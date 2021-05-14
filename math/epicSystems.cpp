bool isPrime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

vector<int> Solution::primesum(int A) {

  vector<int> ans;
  for (int i = 2; i <= (A / 2); i++) {
    if (isPrime(i) && isPrime(A - i)) {
      ans.push_back(i);
      ans.push_back(A - i);
      return ans;
    }
  }
}
