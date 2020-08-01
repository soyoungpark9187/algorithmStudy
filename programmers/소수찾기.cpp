#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int isDec(int n) {
    int flag=1;
    if (n==0 || n ==1)
        flag = 0;
    for (int i=2; i<n; i++) {
        if (n%i==0) 
            flag = 0;
    }
    return flag;
}
bool check[10000000];
int solution(string numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
     do {
		for (int i = 1; i <= numbers.size(); ++i) {
			int n = stoi(numbers.substr(0, i));
			if (check[n]) continue;
			check[n] = true;
			if(isDec(n)) { answer++; }
		}
	} while (next_permutation(numbers.begin(), numbers.end()));
    return answer;
}
