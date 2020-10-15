#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<char> c;
  int sum=0;
  for (int i=0; i<s.size(); i++) {
    if (isalpha(s[i]))
      c.push_back(s[i]);
    else
      sum+=int(s[i]-'0');
  }
  sort(c.begin(), c.end());
  string r;
  for (int i=0; i<c.size(); i++) {
    cout << c[i];
  }
  cout << sum << "\n";
}
