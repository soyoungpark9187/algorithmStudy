#include <string>
#include <cstring>
#include <vector>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    for (int i=0; i<strings.size(); i++) {
        for (int j=i; j<strings.size(); j++) {
            if (strings.at(i)[n] > strings.at(j)[n]) {
                string temp = strings.at(i);
                strings.at(i) = strings.at(j);
                strings.at(j) = temp;
            }
            if (strings.at(i)[n] == strings.at(j)[n]) {
                if (strcmp(strings.at(i).c_str(), strings.at(j).c_str()) > 0) {
                    string temp = strings.at(i);
                    strings.at(i) = strings.at(j);
                    strings.at(j) = temp;
                }
            }
        }
    }
    answer = strings;
    return answer;
}
