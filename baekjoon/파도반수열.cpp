  
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long arr[101];
  arr[0] = 1;
  arr[1] = 1;
  arr[2] = 1;
  arr[3] = 2;
  arr[4] = 2;
  int test;
  cin >> test;
  int prev=5;
  for (int t=0; t<test; t++) {
    int n;
    cin >> n;
    for (int i=prev; i<n; i++) {  
      arr[i] = arr[i-1] + arr[i-5];
    }
    if (n >= 5)
      prev=n;
    cout << arr[n-1] << "\n";
  }
}
