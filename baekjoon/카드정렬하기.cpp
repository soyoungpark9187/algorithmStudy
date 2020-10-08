#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  vector<int> v;
  int cnt = 0;
  int num;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> num;
    v.push_back(num);
  }
  while(v.size() > 2) {
    sort(v.begin(), v.end());
    v.push_back(v.at(0)+v.at(1));
    cnt+=(v.at(0)+v.at(1));
    v.erase(v.begin());
    v.erase(v.begin());
  }
  cnt+=(v.at(0)+v.at(1));
  cout << cnt;
}
