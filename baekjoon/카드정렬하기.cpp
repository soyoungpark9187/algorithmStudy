#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  priority_queue< int, vector<int>, greater<int>> pq;
  int cnt = 0;
  int num;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> num;
    pq.push(num);
  }
  while(pq.size() > 1) {
    int new_n = pq.top();
    pq.pop();
    new_n += pq.top();
    cnt+=new_n;
    pq.push(new_n);
    pq.pop();
  }
  cout << cnt;
}
