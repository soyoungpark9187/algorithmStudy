  
#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  cin >> test;
  for (int t=0; t<test; t++) {
    int n, m;
    queue<int> paper;
    priority_queue<int, vector<int>, less<int>> cri;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
      int num;
      cin >> num;
      paper.push(num);
      cri.push(num);
    }
    int cnt = 0;
    int idx = 0;
    while (!cri.empty()) {
      if (paper.front() == cri.top()) {
        paper.pop();
        cri.pop();
        cnt++;
        if (m == 0) {
          cout << cnt << "\n";
          break;
        }
        m--;
      }
      else {
        int temp = paper.front();
        paper.pop();
        paper.push(temp);
        if (m == 0)
          m = paper.size()-1;
        else
          m--;
      }
    }
  }
}
