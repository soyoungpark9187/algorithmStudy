#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, c;
  cin >> n;
  cin >> c;
  vector<int> v[102];
  for (int i; i<c; i++) {
    int f, t;
    cin >> f >> t;
    v[f].push_back(t);
    v[t].push_back(f);
  }
  vector<int> virused;
  queue<int> iter;
  int checked[101];
  iter.push(1);
  virused.push_back(1);
  checked[1] = 1;
  while (!iter.empty()) {
    for (int i=0; i< v[iter.front()].size(); i++) {
      int to = v[iter.front()][i];
      virused.push_back(to);
      if (checked[to] != 1)
        iter.push(to);
      checked[to] = 1;
    }
    iter.pop();
  }
  sort(virused.begin(), virused.end());
  virused.erase(unique(virused.begin(),virused.end()),virused.end());
  cout << virused.size()-1 << "\n";
}
