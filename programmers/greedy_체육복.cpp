#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	answer = n - lost.size();
	int check[31] = { 0, };
	for (int i = 0; i < reserve.size(); i++)
		check[reserve.at(i)]++;
	for (int i = 0; i < lost.size(); i++) {
		check[lost.at(i)]--;
		if (check[lost.at(i)] == 0)
			answer++;
	}

	for (int i = 1; i <= n; i++) {
		if (check[i] == -1) {
			if (check[i - 1] == 1) {
				check[i - 1] = check[i] = 0;
				answer++;
			}
			else if (check[i + 1] == 1) {
				check[i + 1] = check[i] = 0;
				answer++;
			}
		}
	}
	return answer;
}
