#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[100];
  int d[100];// DP테이블
  for (int i=0; i<n; i++)
    cin >> arr[i];
  d[0] = arr[0];
  d[1] = max(d[0], arr[1]);
  for (int i=2; i<n; i++)
    d[i] = max(d[i-1], d[i-2] + arr[i]);  
  cout << d[n-1] << "\n";
}
