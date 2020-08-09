#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    int sum = 0;
    int i1=0;
    int i2 = people.size()-1;
    answer = people.size();
    while (i1 < i2) {
        if (people.at(i1) + people.at(i2) <= limit) {
            i1++;
            answer--;
        }
        i2--;
    }
    return answer;
}
