#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool* prime = new bool[n+1];
    for (int i=2; i<=n; i++) {
        prime[i] = true;
    }
    for (int i=2; i<=sqrt(n); i++) {
        if (prime[i])
            for (int j=i*i; j<=n; j+=i) {
                prime[j] = false;
            }
    }
    for (int i=2; i<=n; i++){
        if (prime[i] == true)
            answer++;
    }
    return answer;
}
