int Solution::reverse(int A) {
  long rev = 0, neg = 0;
  if (A < 0) {
    neg = 1;
    A = abs(A);
  }

  while (A != 0) {
    rev = (rev * 10) + (A % 10);
    A /= 10;
    if (rev < INT_MIN || rev > INT_MAX) {
      rev = 0;
      break;
    }
  }

  if (neg)
    rev = rev * -1;

  return rev;
}
