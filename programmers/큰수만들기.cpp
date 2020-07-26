#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;
bool compare (int a, int b){
    return a > b;
}

string solution(string number, int k) {
    string answer = "";
    int idx=-1;
    for (int i=0; i<number.length()-k; i++) { 
        int max = -1;
        int max_idx = -1;
        for (int j=idx+1; j<k+1+i; j++) {
            if (number[j]-'0' > max) {
                max = (number[j]-'0');
                max_idx = j;
            }
        }
        answer.append(to_string(max));
        idx = max_idx;
    }
    return answer;
}
