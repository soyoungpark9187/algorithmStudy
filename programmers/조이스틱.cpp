#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int answer = 0;
    int changed = 0;
    int not_a=0;
    int now=0;
    int a;
    int n_size = name.size();
    
    for (int i=0; i<n_size; i++) {
        if (name.at(i) != 'A')
            not_a++;
    }
    while (changed != not_a) {
        int min_a=-1;
        int min_i=0;
        for (int i=0; i<n_size; i++) {
            if (name.at(i) != 'A') {
                a = min(abs(i-now), abs(n_size-i+now));
                if (min_a==-1 || min_a > a) {
                    min_a = a;
                    min_i = i;
                }
            }    
        }
        answer+=min_a+ min(name[min_i]-'A', 1+'Z'-name[min_i]);
        name[min_i] = 'A';
        now = min_i;
        changed++;
    }
    return answer;
}
