#include <bits/stdc++.h>

using namespace std;

int p[];
int s[];

void build(int n) {
  // iota(p, p + n, 0); // like a for :)
  for (int i = 0; i < n; i++) {
    p[i] = i;
    s[i] = 1;
  }
}

int Find(int i) {
  return p[i] == i ? i : p[i] = Find(p[i]);
}

void Union(int i, int j) {
  i = Find(i);
  j = Find(j);
  if (i == j) return;
  if (s[i] > s[j]) swap(i, j);
  p[i] = j;
  s[j] += s[i];
}