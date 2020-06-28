#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare (int a, int b) {
    return a < b;
}
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> middle;
    for (int i=0; i<commands.size(); i++) {
        vector<int>::iterator iter = array.begin();        
        middle.assign(array.begin()+commands.at(i).at(0)-1, array.begin()+commands.at(i).at(1));
        sort(middle.begin(), middle.end(), compare);
        answer.push_back(middle.at(commands.at(i).at(2)-1));
    }
    return answer;
}
