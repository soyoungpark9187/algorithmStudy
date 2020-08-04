#include <string>
#include <vector>

#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> m;
    
    for (int i=0; i<clothes.size(); i++) {
        m[clothes.at(i)[1]]++;
    }
    for (auto i=m.begin(); i!=m.end(); i++)
        answer*=(i->second) + 1;
    answer-=1;
    return answer;
}
