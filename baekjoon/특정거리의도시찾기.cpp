#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k, x; 
  cin >> n >> m >> k >> x;
  vector<pair<int, int>> v;
  vector<int> c(300001, -1);
  int n1, n2;
  for (int i=0; i<m; i++) {
    cin >> n1 >> n2;
    v.push_back({n1, n2});
    if (n1 == x) c[n2] = 1;
  }
  c[x] = 0;
  for (int i=1; i<k; i++) {
    for (int j=0; j<m; j++) {
      for (int t=0; t<m; t++) {
        if (v[j].second == v[t].first && v[j].first == x) {
          if (c[v[t].second] == -1) c[v[t].second] = c[v[j].second] + 1;
        }
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
