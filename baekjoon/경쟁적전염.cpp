#include <bits/stdc++.h>
using namespace std;

int graph[200][200];
struct data {
  int virus;
  int x;
  int y;
  int time;
};
bool compare(struct data a, struct data b) {
  return a.virus < b.virus;   
}

int main() {
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int x1, y1, s;
vector<struct data> v;
queue<struct data> q;
struct data d;
int n, k;
  cin >> n >> k;
for (int i=0; i<n; i++) {
  for (int j=0; j<n; j++) {
    cin >> graph[i][j];
    if (graph[i][j] != 0) {     
      d.x = i;
      d.y = j;
      d.time = 0;
      d.virus = graph[i][j];
      v.push_back(d);
    }
  }
}
sort(v.begin(), v.end(), compare);
for (int i=0; i<v.size(); i++) {
  if (v[i].virus !=0) {
    q.push(v[i]);
  }
}
cin >> s >> x1 >> y1;
int time = 0;
while (!q.empty()) {
  int x = q.front().x;
  int y = q.front().y;
  int virus = q.front().virus;
  int time = q.front().time;
  q.pop();
  if (time >= s) break;
  for (int i=0; i<4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx <0 || nx >= n || ny < 0 || ny >= n) continue;
    if (graph[nx][ny] == 0) {
      graph[nx][ny] = virus;
      d.x = nx;
      d.y = ny;
      d.virus = virus;
      d.time = time + 1;
      q.push(d);
    }
  }
}
cout << graph[x1-1][y1-1] << "\n";
}
