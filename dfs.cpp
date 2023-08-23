#include <iostream>
#include <vector>

using namespace std;

const int N = 3;
bool cycle_graph = false;

bool visited[N];
vector<int> A[N];

void dfs(int from, int to) {
  if (visited[to]) {
    cycle_graph = true;
    return;
  }
  visited[to] = true;
  cout << from + 1 << " - " << to + 1 << "\n";
  for (auto u : A[to]) {
    dfs(to, u);
  }
}

void is_graph_cycle() {
  if (cycle_graph) {
    cout << "It's cycle graph!"
         << "\n";
  } else {
    cout << "It's not cycle graph!"
         << "\n";
  }
}

void is_graph_connected() {
  for (bool a : visited) {
    if (!a) {
      cout << "It's not connected graph!";
      return;
    }
  }
  cout << "It's connected graph!";
}

int main() {
  // cycle graph test

  // A[0].push_back(1);
  // A[0].push_back(2);
  // A[1].push_back(0);
  // A[1].push_back(2);
  // A[2].push_back(0);
  // A[2].push_back(1);

  // usual test
  A[0].push_back(1);
  A[0].push_back(5);
  A[1].push_back(2);
  A[2].push_back(3);
  A[3].push_back(4);

  dfs(0, 0);
  is_graph_cycle();
  is_graph_connected();

  return 0;
}
