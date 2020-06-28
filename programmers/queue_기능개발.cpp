#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int release = 0;
    int check[100] = {0,};
    int done[100] = {0,};
    int from = 0;
    int whole = progresses.size();
    int idx = 0;
    while (idx == 0) {
        for (int i=0; i<progresses.size(); i++) {
            if (progresses.at(i) < 100)
                progresses.at(i) += speeds.at(i);
            if (progresses.at(i) >= 100) {
                done[i] = 1;
            }
        }
        if (done[from] == 1) {
                int j =from;
                while (done[j] == 1) {
                    release++;
                    if (j == whole-1)
                        idx = 1;
                    j++;
                }
                from = j;
                answer.push_back(release);
                release = 0;
            }
    }
    return answer;
}
