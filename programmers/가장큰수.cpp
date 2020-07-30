#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int i=1;
bool compare (int a, int b) {
    string a_str = to_string(a);
    string b_str = to_string(b);
    return a_str+b_str > b_str+a_str;
}
string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), compare);
    
    for (int i=0; i<numbers.size(); i++) {
        answer.append(to_string(numbers[i]));
    }
    if (answer.front() == '0')
        answer = "0";
    return answer;
}
