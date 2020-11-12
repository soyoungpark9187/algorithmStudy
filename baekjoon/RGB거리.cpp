#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int arr[1001][3];
    int s[1001][3];
    cin >> n;
    for (int i=0; i<n; i++){
      for (int j=0; j<3; j++) {
        cin >> arr[i][j];
        s[i][j] = arr[i][j];
      }
    }
    for(int i=0; i<3; i++)
      s[0][i] = arr[0][i];
    for (int i=1; i<n; i++) {
      s[i][0] = arr[i][0] + min (s[i-1][1], s[i-1][2]);
      s[i][1] = arr[i][1] + min (s[i-1][0], s[i-1][2]);
      s[i][2] = arr[i][2] + min (s[i-1][0], s[i-1][1]);
    }
    cout << min( min(s[n-1][0], s[n-1][1]), s[n-1][2]);
}
