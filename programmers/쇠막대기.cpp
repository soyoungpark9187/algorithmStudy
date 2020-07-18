// 모범답안
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string a) {
    int answer = 0;
    stack<char> s;

    for(int i=0 ; i<a.length();i++){
        if(a[i] =='(')
            s.push(a[i]);
        else{
            s.pop();
            if(a[i-1] =='(')
                answer += s.size();
            else
                answer ++;
        }
    }
    return answer;
}
