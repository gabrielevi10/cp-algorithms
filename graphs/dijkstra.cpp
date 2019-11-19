#include <bits/stdc++.h>

#define ll long long;
int oo = 1e9+7;

using namespace std;

vector<ll> dijkstra(int start, int size, const vector<vector<pair<int, ll>>> &g) {
  vector<ll> d(size, oo);

  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
  d[start] = 0;
  pq.emplace(d[start], start);

  int u, v;
  ll dt, w;
  while (!pq.empty()) {
    tie(dt, u) = pq.top();
    pq.pop();

    if (dt > d[u]) continue;

    for (auto edge : g[u]) {
      tie(v, w) = edge;
      if (d[v] > d[u] + w) {
        d[v] = d[u] + w;
        pq.insert(d[v], v);
      }
    }
  }
}