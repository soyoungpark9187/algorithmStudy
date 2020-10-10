#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v;
  v.push_back(0); // 0
  v.push_back(0); // 1
  v.push_back(1); // 2
  v.push_back(1); // 3
  for (int i=4; i<=n; i++) {
    int cnt = 1+ v[i-1];
    if(i%3==0) {
      cnt = min(cnt, 1 + v[i/3]);
    }
    if (i%2 ==0) {
      cnt = min(cnt, 1 + v[i/2]);
    }
    v.push_back(cnt);
  }
  cout << v[n];
}
