#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int isDec(int n) {
    int flag=1;
    if (n==0 || n ==1 || n%2==0)
        flag = 0;
    if (n==2) flag=1;
    for (int i=3; i<n; i+=2) {
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
