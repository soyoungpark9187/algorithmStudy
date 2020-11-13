#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
int x;
cin >> n;
vector<int> v;
for (int i=0; i<n; i++) {
  cin >> x;
  v.push_back(x);
}
int d[n];
for (int i=0; i<n; i++) d[i] = 1;  
reverse(v.begin(), v.end());

for (int i=1; i<n; i++) {
  for (int j=0; j<i; j++) {
    if (v[i] > v[j]) {
      d[i] = max(d[i], d[j] + 1);
    }
  }
}
int m = 0;
for (int i=0; i<n; i++) {
  m = max(m, d[i]);
}
cout << n - m;
}
