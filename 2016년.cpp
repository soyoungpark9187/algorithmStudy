#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string week[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int date=0;
    //a=5
    for (int i=0; i<a-1; i++) {
        date+=months[i];
   }
    date+=b-1;
    cout << date<< endl;
    answer = week[date%7];
    return answer;
}
