#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int cnt = 0;
  int n, k;
  cin >> n >> k;

  for (int i=0; i<=n; i++) {
    for (int j=0; j<60; j++) {
      for (int x=0; x<60; x++) {
        if (i/10 == k || i%10 == k || j/10 ==k || j%10==k || x/10==k || x%10==k)
          cnt++;
      }
    }
  }
  cout << cnt;
}
