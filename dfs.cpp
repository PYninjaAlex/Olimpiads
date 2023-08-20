#include <iostream>
#include <vector>

using namespace std;

const int N = 4;

bool visited[N];
vector<int> A[N];

void dfs(int from, int to) {
  if (visited[to]) {
    return;
  }
  visited[to] = true;
  cout << from + 1 << " - " << to + 1 << "\n";
  for (auto u : A[to]) {
    dfs(to, u);
  }
}

int main() {
  A[0].push_back(1);
  A[1].push_back(2);
  A[1].push_back(3);
  A[2].push_back(3);
  A[3].push_back(4);
  dfs(0, 0);
  return 0;
}
