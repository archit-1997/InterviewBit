vector<int> Solution::getRow(int A) {
  vector<int> v = {1};
  if (A == 0)
    return v;

  // start filling from the 2nd row which means i=1
  for (int i = 1; i <= A; i++) {
    vector<int> tmp(i + 1, 1);
    for (int j = 0; j <= i; j++) {
      if (j == 0)
        tmp[j] = 1;
      else if (j == i)
        tmp[j] = v[j - 1];
      else
        tmp[j] = v[j] + v[j - 1];
    }
    v = tmp;
  }

  return v;
}
