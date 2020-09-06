#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solution(vector<vector<int>> board)
{    
    int answer = 0;
    for (int i=0; i<board[0].size(); i++) {
        if (board[0][i] == 1) {
            board[0][i] = 1;
            answer = 1;
        }
        else
            board[0][i] = 0;
    }
    for (int j=0; j<board.size(); j++) {
        if (board[j][0] == 1) {
            board[j][0] = 1;
            answer = 1;
        }
        else
            board[j][0] = 0;
    }
    for (int i=1; i<board.size(); i++) {
        for (int j=1; j<board[0].size(); j++) {
            if (board[i][j] == 1) {
                board[i][j] = 1+ min(board[i-1][j-1], min(board[i-1][j], board[i][j-1]));
                if (answer < board[i][j])
                    answer = board[i][j];
            }
        }
    }
    answer*=answer;
    return answer;
}
