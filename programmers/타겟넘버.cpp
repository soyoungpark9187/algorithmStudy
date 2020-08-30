#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int answer = 0;
void dfs(vector<int> numbers, int target, int sum, int n) {                                                      
    if (sum == target && n == numbers.size()) {answer++; return;}
    if (n == numbers.size()) return;
    else {
    dfs(numbers, target, sum+numbers[n], n+1);
    dfs(numbers, target, sum-numbers[n], n+1);
    }
}
int solution(vector<int> numbers, int target) {
    dfs(numbers, target, 0, 0);    
    return answer;
}
