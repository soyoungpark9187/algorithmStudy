#include <bits/stdc++.h>

using namespace std;
int main() {
  int n;
  cin >> n;
  int d[100];// 연산 결과를 저장할 array (DP테이블)
  d[1] = 1;
  d[2] = 1;
  for (int i=3; i<=n; i++)
    d[i] = d[i-2] + d[i-1];
  cout << d[n] << "\n";
}
