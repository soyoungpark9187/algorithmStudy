#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  string s;
  cin >> s;
  int f=0, e=0;
  for (int i=0; i<s.length()/2; i++)
    f+=int(s[i]);
  for (int i=s.length()/2; i<s.length(); i++)
    e+=int(s[i]);
  if (f == e) cout << "LUCKY";
  else cout << "READY";
}
