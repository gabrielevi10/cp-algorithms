#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int n) {
  vector<int> primes;
  vector<bool> isPrime(n+1, true);

  isPrime[1] = false;

  for (int i = 1; i <= n; i ++) {
    if (isPrime[i]) {
      primes.push_back(i);

      for (int x = i + i; x <= n; x += i) {
        isPrime[x] = false;
      }
    }
  }

  return primes;
}