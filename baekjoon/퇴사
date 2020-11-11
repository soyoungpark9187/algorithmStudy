#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int p[16];
  int t[16];
  int dp[16];
  for (int i=0; i<n; i++) {
    cin >> t[i] >> p[i];
  }
  dp[n] = 0;
  int money = 0;
  for (int i=n-1; i>=0; i--) {
    if (t[i] + i >= 0 && t[i] + i <= n) {
      dp[i] = max(p[i] + dp[t[i] + i], money);
      money = dp[i];
    }
    else
      dp[i] = money;
  }
  cout << money << "\n";
}
