#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int n2=0;
    int temp = n;
    while (n>0) {
        if (n%2 == 1) n2++;
        n = n / 2;
    }
    n = temp;
    while (1) {
        n++;
        int n2_b = 0;
        int t = n;
        while (t>0) {
            if (t%2 == 1) n2_b++;
            t = t / 2;
        }
        if (n2 == n2_b) {answer = n; break;}
    }
    return answer;
}
