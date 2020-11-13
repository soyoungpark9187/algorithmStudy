#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> q;
    for (int i=0; i<n; i++) {
      string direc;
      int val;
      cin >> direc;
      if (direc.compare("push") == 0 ) {
        cin >> val;
        q.push(val);
      }
      else if (direc.compare("pop") == 0 ) {
        if (q.empty())
          cout << "-1" << "\n";
        else {
          cout << q.front() << "\n";
          q.pop();
        }
      }
      else if (direc.compare("size") == 0) {  
        cout << q.size() << "\n";
      }
      else if (direc.compare("empty") == 0) {
        cout << q.empty() << "\n";
      }
      else if (direc.compare("front") == 0) {
        if (q.empty())
          cout << "-1"<< "\n";
        else
          cout << q.front()<< "\n";
      }
      else if (direc.compare("back") == 0) {
        if (q.empty())
          cout << "-1"<< "\n";
        else
          cout << q.back() << "\n";
      }
    }
}
