#include <bits/stdc++.h>
using namespace std;

int main() {
  string text;
  string angel;
  string devil;
  cin >> text >> angel >> devil;
  int cnt = 0;
  int dp_a[21][101];
  int dp_v[21][101];  
  for (int i=0; i< angel.size(); i++) {
    if (angel[i] == text[0]){
      dp_a[0][i] = 1;
    }
    if (devil[i] == text[0]) {
      dp_v[0][i] = 1;
    }
  }
  for (int i=0; i<angel.size(); i++) {
    for (int j=0; j<text.size(); j++) {
      if (angel[i] == text[j]) {
        for (int k=i+1; k<angel.size(); k++) {
          if (j+1 >= text.size())
            continue;
          else if (devil[k] == text[j+1]) {
            dp_v[j+1][k] += dp_a[j][i];
          }
        }
      }
      if (devil[i] == text[j]) {
        for (int k=i+1; k<devil.size(); k++) {
          if (j+1 >= text.size())
            continue;
          else if (angel[k] == text[j+1]) {
            dp_a[j+1][k] += dp_v[j][i];
          }
        }
      }
    }
  }
  for (int i=0; i<angel.size(); i++) {
    cnt += dp_a[text.size()-1][i];
    cnt += dp_v[text.size()-1][i];
  }
  cout << cnt << "\n";
}
