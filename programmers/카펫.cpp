#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int mul = brown+yellow;
    int s = brown/2 + 2;
    for (int i=1; i<=int(mul/2); i++) {
        if (mul % i == 0) {
            if (mul % (s-i) == 0) {
                if (i * (s-i) == mul){
                if ( i > s-i) {
                    answer.push_back(i);
                    answer.push_back(s-i);
                }
                else {
                    answer.push_back(s-i);
                    answer.push_back(i);
                }
                break;
                }
            }
        }
    }
    return answer;
}
