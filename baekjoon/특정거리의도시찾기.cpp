#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k, x; 
  cin >> n >> m >> k >> x;
  vector<int> v[300001];
  vector<int> c(300001, -1);
  int n1, n2;
  for (int i=0; i<m; i++) {
    cin >> n1 >> n2;
    v[n1].push_back(n2);
  }
  c[x] = 0;
  queue<int> q;
    q.push(x);
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        for (int i = 0; i <  v[now].size(); i++) {
            int next = v[now][i];
            if (c[next] == -1) {
                c[next] = c[now] + 1;
                q.push(next);
            }
        }
    }
  int cnt = 0;
  for (int i=1; i<=n; i++) {
    if (c[i] == k) {
      cout << i << "\n";
      cnt++;
    }
  }
  if (cnt==0) cout << "-1" << "\n";
}
