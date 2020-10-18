#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int arr[100];
  int d[100] = {0, };
  for (int i=0; i<n; i++) {
   cin >> arr[i];
   d[arr[i]] = 1;
  }
  for (int i=1; i<=m; i++) {
    if (d[i] == 0) {
      d[i] = 10000;
      for (int j=0; j<n; j++) {
        if (i > arr[j]) {
          if (d[i-arr[j]] != 0) {
            d[i] = min(d[i], d[i-arr[j]] + 1);
          }
        }
      }
    }
  }
  if (d[m] == 10000) cout << "-1" << "\n";
  else  cout << d[m] << "\n";
}
