#include <bits/stdc++.h>
using namespace std;
int n,m;
bool visited[1001][1001];
int graph[1001][1001];
bool dfs(int x, int y) {
  if (x < 0 || x >= n || y < 0 || y >= m) return false;
  if (graph[x][y] == 0) {
    graph[x][y] = 1;
    dfs(x-1, y);
    dfs(x+1, y);
    dfs(x, y-1);
    dfs(x, y+1);
    return true;
  }
  return false;
}
int main() {
  cin >> n >> m;  
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> graph[i][j];
    }
  }
  int cnt = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (dfs(i, j)) cnt++;
    }
  }
  cout << cnt << "\n";
}
