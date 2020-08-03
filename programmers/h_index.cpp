#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int max =*max_element(citations.begin(), citations.end());

    for (int i=max; i>=0; i--) {
        int count_e = count_if(citations.begin(), citations.end(), [i](int elem) { return elem >= i; });
        if (count_e >= i ) {
            answer = i;
            break;
        }
    }
    return answer;
}
