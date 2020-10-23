#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int k=0; k<t; k++) {
  int n, m;
  int arr[100][20];
  cin >> n >> m;
    for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
        cin >> arr[i][j];
      }
    }
    for (int j=1; j<m; j++) {
      for (int i=0; i<n; i++) {
        int temp = arr[i][j];
        if (i-1>=0) {
          temp = max(temp, arr[i][j] + arr[i-1][j-1]);
        }
        temp = max(temp, arr[i][j] + arr[i][j-1]);
        if (i+1 < n) {
          temp = max(temp, arr[i][j] + arr[i+1][j-1]);
        }
        arr[i][j] = temp;
      }
    }
    int ma = arr[0][m-1];
    for (int i=1; i<n; i++) {
      ma = max(ma, arr[i][m-1]);
    }
    cout << ma << "\n";
  }
}
