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
    // 빨강집 (i=0, j=0으로 시작)
    s[1][0] = 2000;// 제외
    s[1][1] = arr[1][1] + arr[0][0];
    s[1][2] = arr[1][2] + arr[0][0];
    for (int i=2; i<n; i++) {
      s[i][0] = arr[i][0] + min (s[i-1][1], s[i-1][2]);
      s[i][1] = arr[i][1] + min (s[i-1][0], s[i-1][2]);
      s[i][2] = arr[i][2] + min (s[i-1][0], s[i-1][1]);    
    }
    int min_cost = min(s[n-1][1], s[n-1][2]);
    // 파랑집 (i=0, j=1으로 시작)
    s[1][1] = 2000;// 제외
    s[1][0] = arr[1][0] + arr[0][1];
    s[1][2] = arr[1][2] + arr[0][1];
    for (int i=2; i<n; i++) {
      s[i][0] = arr[i][0] + min (s[i-1][1], s[i-1][2]);
      s[i][1] = arr[i][1] + min (s[i-1][0], s[i-1][2]);
      s[i][2] = arr[i][2] + min (s[i-1][0], s[i-1][1]);    
    }
    min_cost = min(s[n-1][0], min (min_cost, s[n-1][2]));
    // 초록집 (i=0, j=2으로 시작)
    s[1][2] = 2000;// 제외
    s[1][0] = arr[1][0] + arr[0][2];
    s[1][1] = arr[1][1] + arr[0][2];
    for (int i=2; i<n; i++) {
      s[i][0] = arr[i][0] + min (s[i-1][1], s[i-1][2]);
      s[i][1] = arr[i][1] + min (s[i-1][0], s[i-1][2]);
      s[i][2] = arr[i][2] + min (s[i-1][0], s[i-1][1]);    
    }
    min_cost = min(s[n-1][0], min (min_cost, s[n-1][1]));    
    cout << min_cost;
}
