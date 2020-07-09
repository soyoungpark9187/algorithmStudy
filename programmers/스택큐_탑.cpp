#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    for (int i=0; i<heights.size(); i++) {
        int j=i-1;
        while(j>=0) {
            if (heights.at(i) < heights.at(j)){
                answer.push_back(j+1);
                break;
            }
            else{
                j--;
            }
        }
        if(j==-1){
                answer.push_back(0);
        }
    }
    return answer;
}
