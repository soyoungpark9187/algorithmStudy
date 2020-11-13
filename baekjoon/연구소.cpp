#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[9][9];
int ini[9][9];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int max_cnt = 0;

void spread(int x, int y) {
  for (int i=0; i<4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
      if (arr[nx][ny] == 0) {
        arr[nx][ny] = 2;
        spread(nx, ny);
      }
    }
  }
}
int getSafe() {
  int cnt=0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (arr[i][j] == 0) cnt++;
    }
  }
  return cnt;
}
void dfs(int cnt) {
  if (cnt == 3) {
  // 초기화
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      arr[i][j] = ini[i][j];
    }
  }
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (arr[i][j] == 2) {
        spread(i, j);
      }
    }
  } 
  max_cnt = max(max_cnt, getSafe());
  return;
  }
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (ini[i][j] == 0) {
        ini[i][j] = 1;
        cnt++;
        dfs(cnt);
        ini[i][j] = 0;
        cnt--;
      }
    }
  }
}
int main() {
  cin >> n >> m;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> ini[i][j];
    }
  }
  dfs(0);
  cout << max_cnt << "\n";
}
