/* What is a pivot in a rotated and sorted array ? */

/* -- if(arr[i]>arr[i+1]) in a rotated and sorted array, then arr[i] is the
 * pivot element */

#include <bits/stdc++.h>
using namespace std;

// this function will return the index of the pivot element
// if the array is totally sorted and there is no pivot element, then this will
// return -1
int findPivot(vector<int> v, int low, int high) {
  if (low > high)
    return -1;

  if (low == high)
    return low;

  int mid = low + (high - low) / 2;

  // checking if the current index is the pivot element
  if (mid < high && v[mid] > v[mid + 1])
    return mid;

  // checking if the previous index is the pivot element
  if (mid > low && v[mid] < v[mid - 1])
    return mid - 1;

  // if we have not found the pivot element yet, then recursively call for the
  // two subarrays accordingly
  if (v[low] <= v[mid])
    return findPivot(v, mid + 1, high);

  // else we will find out in the left part
  return findPivot(v, low, mid - 1);
}

int main() {

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  int pos = findPivot(v, 0, n - 1);

  if (pos == -1)
    cout << "The array is already sorted, no pivot element found";

  cout << v[pos];

  return 0;
}
