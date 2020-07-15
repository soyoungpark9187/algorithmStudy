#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for (int i=0; i<prices.size(); i++)
        answer.push_back(0);
    for (int i=0; i<prices.size(); i++) {
        for (int j=i; j<prices.size()-1; j++) {
            if (prices.at(i) <= prices.at(j)) {
                answer.at(i)++;
            }
            else
                break;
        }
    }
    return answer;
}
