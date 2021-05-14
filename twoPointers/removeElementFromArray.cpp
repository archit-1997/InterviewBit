
int Solution::removeElement(vector<int> &A, int B) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details

  unordered_map<int, int> hash;
  int n = A.size(), index = 0;
  for (int i = 0; i < n; i++) {
    if (A[i] == B)
      continue;
    else
      A[index++] = A[i];
  }

  return index;
}
