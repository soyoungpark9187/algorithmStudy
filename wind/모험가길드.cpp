#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[200000];
  for (int i=0; i<n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr+n);

  int team = 0;
  int member = 0;
  for (int i=0; i<n; i++) {
    member++;
    if (arr[i] == member) {
      team++;
      member = 0;
    }
  }
  cout << team;
}
