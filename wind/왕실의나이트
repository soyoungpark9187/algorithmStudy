#include <bits/stdc++.h>
using namespace std;

int main() {
  string t;// 나이트의 위치
  cin >> t;
  int xaxis = int(t[0] -'a');
  int yaxis = int(t[1] - '0' - 1);
  // 최대 8가지
  int cnt = 0;
  int x[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
  int y[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
  for (int i=0; i<8; i++) {
    int x1 = xaxis + x[i];
    int y1 = yaxis + y[i];
    if (x1 >= 0 && x1 <= 8
    && y1 >= 0 && y1 <= 8) cnt++;
  }
  cout << cnt;
}
