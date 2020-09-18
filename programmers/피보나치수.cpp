#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int n1=0, n2=1;
    for (int i=1; i<n; i++) {
        answer=n1+n2;
        n1 = n2 % 1234567;
        n2 = answer % 1234567;
    }
    answer = answer % 1234567;
    return answer;
}
