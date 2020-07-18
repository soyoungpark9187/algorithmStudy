#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string arrangement) {
    int answer = 0;
    int toInt[arrangement.length()];
    int sticks[100000] ={0, };
    if (arrangement[1] == ')')
        toInt[0] = -1;
    else
        toInt[0] = 2;
    for (int i=1; i<arrangement.length(); i++) {
        if (arrangement[i] ==')' && arrangement[i-1]== '(') {
                toInt[i-1] = -1;
                toInt[i] = -2;
        }
        else {
            if (arrangement[i] == '(')
                toInt[i] = 2;
            else
                toInt[i] = 3;
        }
    }
    for (int i=arrangement.length()-1; i>=0; i--) {
        if (toInt[i] == 2) {
            answer+=1;
            int min=arrangement.length();
            int min_j=1;
            for (int j=i; j<arrangement.length(); j++) {
                if (toInt[j]==3) {
                    if (min > j-i){
                        min=j-i;
                        min_j=j;
                    }
                }
            }
            toInt[min_j] = 4;
            toInt[i] = 4;
            for (int x=i; x<min_j; x++) 
                sticks[x]++;   
            }    
    }
    for (int i=0; i<arrangement.length(); i++) {
        if (sticks[i]!=0 && toInt[i] == -1) {
            answer+=sticks[i];
        }
    }
    
    return answer;
}
