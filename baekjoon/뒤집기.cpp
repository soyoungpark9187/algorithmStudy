  
#include <bits/stdc++.h>

using namespace std;
string s;
int cnt0 = 0;
int cnt1 = 0;

int main(void) {
    cin >> s;
    if (s[0] == '1')  cnt1 += 1;
    else   cnt0 += 1;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != s[i + 1]) {
            if (s[i + 1] == '1') cnt1 += 1;
            else cnt0 += 1;
        }
    }
    cout << min(cnt0, cnt1) << '\n';
}
