#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> q(scoville.begin(),scoville.end());
    while (q.top() < K ) {
        int front = q.top();
        q.pop();
        front += q.top() * 2;
        q.pop();
        q.push(front);
        answer++;
        if (q.size()==1 && q.top() < K)
            return -1;
    }
    return answer;
}
