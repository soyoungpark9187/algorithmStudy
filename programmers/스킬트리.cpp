#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    vector<char>::iterator it;
    vector<char> arr;
    for (int i=0; i<skill.length(); i++) {
        arr.push_back(skill[i]);
    }
    int flag;
    for (int i=0; i<skill_trees.size(); i++) {
        string str = skill_trees.at(i);    
        flag = 1;
        for (int j=0; j<str.length(); j++) {
            it = find(arr.begin(), arr.end(), str[j]);
            vector<char> vec;
            for (int p=0; p<j+1; p++)
                vec.push_back(str[p]);
            if (*it!=0) {
                vector<char>::iterator it2;
                for (int x=0; x<it-arr.begin()+1; x++) {
                    it2 = find(vec.begin(), vec.end(), skill[x]);
                    if (it2 == vec.end()) {
                        flag = 0;
                    }
                }
            }
        }
        if (flag == 1) answer+=1;
    }
    return answer;
}
