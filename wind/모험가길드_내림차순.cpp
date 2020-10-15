#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> arr;

int main(void) {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int result = 0; // 총 그룹의 수
    int count = 0; // 현재 그룹에 포함된 모험가의 수
    int now_group = arr[n-1];

    for (int i = n-1; i >= 0; i--) { // 공포도를 낮은 것부터 하나씩 확인하며
        count += 1; // 현재 그룹에 해당 모험가를 포함시키기
        if (now_group == count) {
          result+=1;
          now_group=arr[i-1];
          count=0;
        }
    }

    cout << result << '\n'; // 총 그룹의 수 출력
}
