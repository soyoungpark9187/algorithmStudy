#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> vec[30];
vector<int> basket;
int  num = 0;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;

	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board.size(); j++) {
			if (board[i][j] != 0) {
				vec[j].push_back(board[i][j]);
			}
		}
	}

	for (int i = 0; i < moves.size(); i++) {
		if (vec[moves[i] - 1].empty())
			continue;
		else {
			if (basket.size() == 0) {
				basket.push_back(vec[moves[i] - 1].front());
				vec[moves[i] - 1].erase(vec[moves[i] - 1].begin());
			}
			else {
				if (basket.back() == vec[moves[i] - 1].front()) {
					basket.pop_back();
                    vec[moves[i] - 1].erase(vec[moves[i] - 1].begin());
					answer += 2;
				}
				else {
					basket.push_back(vec[moves[i] - 1].front());
					vec[moves[i] - 1].erase(vec[moves[i] - 1].begin());
				}
			}
		}
	}
	return answer;
}
