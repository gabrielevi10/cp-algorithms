#include <bits/stdc++.h>

using namespace std;

void bfs(int start, vector<vector<int>> graph) {
  queue<int> q;
  vector<bool> visited(graph.size(), false);

  q.push(start);
  visited[start] = true;

  while (!q.empty()) {
    int node = q.front();

    q.pop();

    for (int x : graph[node]) {
      if (!visited[x]) {
        q.push(x);
        visited[x] = true;
      }
    }

  }

}