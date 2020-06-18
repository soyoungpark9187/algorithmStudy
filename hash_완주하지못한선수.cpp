#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
unordered_map<string, int> h;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    for (int i=0; i<participant.size(); i++) {
        h[participant.at(i)]++;
    }
    for (int i=0; i<completion.size(); i++) {
        h[completion.at(i)]--;
    }
    
    unordered_map<string, int>::iterator it;
    for (it=h.begin(); it!=h.end(); it++) {
        if (it->second > 0){
            answer = it->first;
            break;
        }
    }
    return answer;
}
