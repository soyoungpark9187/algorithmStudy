#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[500][500];
  for (int i=0; i<n; i++) {
    for (int j=0; j<=i; j++) {
     cin >> arr[i][j];
    }
  }
  int d[2] = {-1, 0};
  for (int i=1; i<n; i++) {
    for (int j=0; j<=i; j++) {
      int init = arr[i][j];
      for (int x=0; x<2; x++) {
        if (j + d[x] >= 0 && j + d[x] <= i) {
          if (arr[i][j] < init + arr[i-1][j + d[x]]) {
            arr[i][j] = init + arr[i-1][j + d[x]];
          }
        }
      }
    }
  }
  int max = 0;
  for (int t=0; t<n; t++) {
    if (max < arr[n-1][t]) {
      max = arr[n-1][t];
    }
  }
  cout << max;
}
