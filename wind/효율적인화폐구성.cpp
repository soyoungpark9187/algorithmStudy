#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int arr[100];
  vector<int> d(m+1, 10001);
  for (int i=0; i<n; i++) {
   cin >> arr[i];
   d[arr[i]] = 1;
  }
  for (int i=1; i<=m; i++) {
    for (int j=0; j<n; j++) {
      if (i > arr[j]) {
        if (d[i-arr[j]] != 0) {
          d[i] = min(d[i], d[i-arr[j]] + 1);
        }
      }
    }
  }
  if (d[m] == 10001) cout << "-1" << "\n";
  else  cout << d[m] << "\n";
}
