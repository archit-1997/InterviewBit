
void Solution::sortColors(vector<int> &A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details

  int l = 0, m = 0, h = A.size() - 1;
  while (m <= h) {
    if (A[m] == 0)
      swap(A[m++], A[l++]);
    else if (A[m] == 2)
      swap(A[m], A[h--]);
    else
      m++;
  }
}
