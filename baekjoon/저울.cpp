#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int n;
int arr[1000];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)	cin >> arr[i];
	sort(arr, arr + n);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (sum + 1 < arr[i]) break;
		sum += arr[i];
	}
	cout << sum + 1 << endl;
	return 0;
}
