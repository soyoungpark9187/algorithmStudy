#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i=1; i<=n/2; i++) {
        if (n % i == 0) answer+=i;
    }
    if (n!=1) answer+=n;
    else answer+=1;
    return answer;
}
