#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n];
  // First array input
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int m;
  cin >> m;
  int arr2[m];
  //Second  array input
  for (int i = 0; i < m; i++) {
    cin >> arr2[i];
  }
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < m; j++) {
      if (arr[i] == arr2[j]) {
        count++;
        break;
      }
    }
    if (count != 1) cout << arr[i] << " ";
  }
  return 0;
}
