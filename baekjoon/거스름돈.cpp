#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=0;
  int p;
  cin >> p;
  while (1000-p != 0) {
    if (1000-p >= 500) p+=500;
    else if (1000-p >= 100) p+=100;
    else if (1000-p >= 50) p+=50;
    else if (1000-p >= 10) p+=10;
    else if (1000-p >= 5) p+=5;
    else p+=1;
    n++;
  }
  cout << n;
}
