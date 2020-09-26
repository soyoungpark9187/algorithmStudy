#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int n;
char arr[6][6];
vector <pair<int, int>> block;

string answer ="NO";

int check_nec_x(int i, int j) {
  int checked = 0;
  for (int y=0; y<n; y++) {
    if (arr[i][y] == 'T') {
      checked = 1;
      for (int t=0; t<n; t++) {
        if (arr[i][t] == 'O' && ((y < t && j > t) || (j < t && y > t)) ) {
          checked = 0;       
        }
      }
    }
  }
  return checked;
}
int check_nec_y(int i, int j) {
  int checked = 0;
  for (int x=0; x<n; x++) {
    if (arr[x][j] == 'T') {
      checked = 1;
      for (int t=0; t<n; t++) {
        if (arr[t][j] == 'O' && ((x < t && i > t) || (i < t && x > t)) ) {
          checked = 0;
        }
      }
    }
  }
  return checked;
}
int check_nec() {
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (arr[i][j] == 'S') {
        if (check_nec_x(i, j) || check_nec_y(i, j)) {
          return 1;
        }
      }
    }
  }
    return 0;
}
int main() {
  cin >> n;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> arr[i][j];
    }
  }
  // check location to install block
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (arr[i][j] == 'X') {
        block.push_back({i, j});
      }
    }
  }

  vector<int> ind;
  for (int i=0; i<3; i++) {
    ind.push_back(1);
  }
  for (int i=0; i<block.size()-3; i++) {
    ind.push_back(0);
  }
  sort(ind.begin(), ind.end());
  
  do{
		for(int i=0; i<ind.size(); i++) {
			if (ind[i] == 1) {
        arr[block[i].first][block[i].second] = 'O';
      }
    }
    if (check_nec() == 0) answer = "YES";
    for(int i=0; i<ind.size(); i++) {
			if (ind[i] == 1) {
        arr[block[i].first][block[i].second] = 'X';
      }
    }
	} while(next_permutation(ind.begin(), ind.end()));
  cout << answer;
}
