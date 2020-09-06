#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int cnt = 0, cnt1 = 0, cnt2 = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '(') {
            cnt++;
            cnt1++;
        }
        else {
            cnt--;   
            cnt2++;
        }
        if (cnt < 0) answer=false;
    }
    if (cnt1 != cnt2) answer=false;
    return answer;
}
