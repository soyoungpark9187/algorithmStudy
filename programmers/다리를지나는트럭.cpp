#include <string>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	int on = 0;
	vector<int> time;
	int crosed = 0;
	int idx = 0;
	for (int i = 0; i < truck_weights.size(); i++)
		time.push_back(0);
	while (crosed < truck_weights.size()) {
		answer++;
		if (idx < truck_weights.size()) {
			if (on + truck_weights.at(idx) <= weight) {
				on += truck_weights.at(idx);
				idx += 1;
			}
		}
		for (int i = 0; i < idx; i++) {
			time.at(i)++;
		}
		for (int i = crosed; i < truck_weights.size(); i++) {
			if (time.at(i) == bridge_length) {
				on -= truck_weights.at(i);
				crosed++;

			}
		}
	}
	answer += 1;
	return answer;
}
