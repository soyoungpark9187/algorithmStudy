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
    dp[0][1] = s[0][1] + dp[1][0];
    dp[1][1] = s[1][1] + dp[0][0];
    for (int i=2; i<n; i++) {
      dp[0][i] = s[0][i] + max(dp[1][i-2], dp[1][i-1]);
      dp[1][i] = s[1][i] + max(dp[0][i-2], dp[0][i-1]);
    }
    printf("%d\n", max(dp[0][n-1], dp[1][n-1]));
  }
}
