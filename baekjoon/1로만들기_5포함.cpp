#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  int d[100];
  d[1] = 0;
  d[2] = 1;
  d[3] = 1;
  d[4] = 2;
  d[5] = 1;
  for (int i=6; i<=x; i++) {
    d[i] = d[i-1] + 1; // 1을 더하는 경우
    if (i % 5 == 0) d[i] = min(d[i], d[i/5] + 1);
    if (i % 3 == 0) d[i] = min(d[i], d[i/3] + 1);
    if (i % 2 == 0) d[i] = min(d[i], d[i/2] + 1);
  }
  cout << d[x] << "\n";
}
