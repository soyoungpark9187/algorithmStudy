#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string week[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int date=0;
    for (int i=0; i<a-1; i++) {
        date+=months[i];
   }
    answer = week[(date+b-1)%7];
    return answer;
}
