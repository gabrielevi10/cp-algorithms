#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph; 
bool visited[100000];

void dfs(int start) {
  visited[start] = true;

  for (int node : graph[start]) {
    if (!visited[node]) {
      dfs(node);
    }
  }

}