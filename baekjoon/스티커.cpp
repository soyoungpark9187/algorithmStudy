#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  cin >> test;
  for (int t=0; t<test; t++) {
    int n;
    cin >> n;
    int s[2][100001];
    int dp[2][100001] = {{-1,}, };
    for (int i=0; i<n; i++) {
      scanf("%d", &s[0][i]);
    }
    for (int i=0; i<n; i++) {
      scanf("%d", &s[1][i]);
    }
    dp[0][0] = s[0][0];
    dp[1][0] = s[1][0];    
    for (int i=1; i<n; i++) {
      for (int j=0; j<2; j++) {
        for (int y=0; y<i; y++) {
          for (int x=0; x<2; x++) {
            if ((y==i && x==j-1) || (y==i-1 && x==j)) {
                continue;
            }
            else {
              dp[j][i] = max(dp[j][i], dp[x][y]);
            }
          }
        }
        dp[j][i] += s[j][i];
      }
    }
    printf("%d\n", max(dp[0][n-1], dp[1][n-1]));
  }
}
