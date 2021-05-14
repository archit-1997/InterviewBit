string Solution::countAndSay(int A) {
  int count = 1;
  string s = "1";
  if (A == 0)
    return "";
  if (A == 1)
    return s;
  while (count < A) {
    string rep = "";
    int n = s.size();

    int i = 0;
    while (i < n) {
      char ch = s[i];
      int c = 0;
      while (i < n && s[i] == ch) {
        i++;
        c++;
      }
      rep = rep + to_string(c) + ch;
    }
    s = rep;
    count++;
  }
  return s;
}
