#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> line[1001];
int visited[1001] = {0, };
int cnt = 0;
void dfs(int node) {
  visited[node] = 1;
  for (int i=0; i<line[node].size(); i++) {
    if(visited[line[node][i]] == 0)
        dfs(line[node][i]);
  }
}
int main() {  
  cin >> n >> m;
  for (int i=0; i<m; i++) {
    int u, v;
    cin >> u >> v;
    line[u].push_back(v);
    line[v].push_back(u);
  }
  for (int i=1; i<=n; i++) {
    if (visited[i] == 0) {
      dfs(i);
      cnt++;
    }
  }
  cout << cnt << "\n";
}
