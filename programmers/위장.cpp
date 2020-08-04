#include <string>
#include <vector>

#include <algorithm>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    vector<string> cat;
    int len[30] = {0,};
    int cnt=0;
    
    for (int i=0; i<clothes.size(); i++) {
        if (find(cat.begin(), cat.end(), clothes.at(i)[1]) != cat.end()) {
           len[distance(cat.begin(), find(cat.begin(), cat.end(), clothes.at(i)[1]))]++;            
        }
        else {
            cat.push_back(clothes.at(i)[1]);
            len[cnt]++;  
            cnt++;
        }
    }
    for (int i=0; i < cnt; i++) {
        answer *= (len[i]+1);
    }
    answer-=1;
    return answer;
}
