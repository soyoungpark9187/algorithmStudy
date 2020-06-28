#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int check_a(int answer, int n) {
    int a;
    if ((n+1)%5 ==0)
        a=5;
    else
        a= (n+1)%5;
    if (a == answer)
        return 1;
    else
       return 0;
}
int check_b(int answer, int n) {
    int a;
    if (n%2==0)
        a=2;
    else {
        if (n%8==1)
            a=1;
        else if (n%8==3)
            a=3;
        else if (n%8==5)
            a=4;
        else
            a=5;
    }
    if (a==answer)
        return 1;
    else
       return 0;
}
int check_c(int answer, int n) {
    int a;
    if (n%10 == 0 || n%10==1)
        a=3;
    else if (n%10 == 2 || n%10==3)
        a=1;
    else if (n%10 == 4 || n%10==5)
        a=2;
    else if (n%10 == 6 || n%10==7)
        a=4;
    else
        a=5;
    if (a==answer)
        return 1;
    else
       return 0;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a1=0;
    int a2=0;
    int a3=0;

    for (int i=0; i<answers.size(); i++) {
        if (check_a(answers.at(i), i)==1)
            a1++;
        if (check_b(answers.at(i), i)==1)
            a2++;
        if (check_c(answers.at(i), i)==1)
            a3++;        
    }
    vector<int> result;
    result.push_back(a1);
    result.push_back(a2);
    result.push_back(a3);
    int max = *max_element(result.begin(), result.end());
    int num=0;
    if (max == a1){
        answer.push_back(1);
    }
    if (max == a2){
        answer.push_back(2);
    }
    if (max == a3){
        answer.push_back(3);
    }

    return answer;
}
