int Solution::isPrime(int A) {
  if (A == 0 || A == 1)
    return 0;
  if (A == 2 || A == 3)
    return 1;

  for (int i = 2; i <= sqrt(A); i++) {
    if (A % i == 0)
      return 0;
  }
  return 1;
}
