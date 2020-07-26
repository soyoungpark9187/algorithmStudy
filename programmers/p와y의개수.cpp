#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    int p_n=0, y_n=0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == 'p' || s[i] == 'P')
            p_n++;
        else if (s[i] == 'y' || s[i] == 'Y')
            y_n++;
    }
    return p_n==y_n;

    return answer;
}
