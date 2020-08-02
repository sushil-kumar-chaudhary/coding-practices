/*
given two integers A and B and needs to output the product of all numbers from 1 to A modulo B, where 1 and A are inclusive.
For example, if A=5 and B=7, the answer will be ( 1 * 2 * 3 * 4 * 5 ) % 7 = 1 so the final answer is 1.  */

#include <bits/stdc++.h>

using namespace std;
int a[100007];
void primes() {
  int limit = 100006;
  for (int i = 0; i <= limit; i++) {
    a[i] = 1;
  }
  a[0] = 0;
  a[1] = 0;
  for (int i = 2; i <= limit; i++) {
    if (a[i])
      for (int j = 2 * i; j <= limit; j += i) {
        a[j] = 0;
      }
  }
}

long long factmod(int n, int p) {
  long long res = 1;
  while (n > 1) {
    res = (res * ((n / p) % 2 ? p - 1 : 1)) % p;
    for (int i = 2; i <= n % p; ++i)
      res = (res * i) % p;
    n /= p;
  }
  return res % p;
}
int fact[20];
int main() {
  fact[0] = 1;
  for (int i = 1; i <= 11; i++) {
    fact[i] = 1;
  }
  for (int i = 1; i <= 11; i++) {
    fact[i] *= fact[i - 1] * i;
  }
  primes();
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    if (n <= 11) {
      cout << fact[n] % m << endl;
      continue;
    }

    if (n >= m) {
      cout << 0 << endl;
      continue;
    }

    if (n <= m && a[m] == 0) {
      cout << 0 << endl;
      continue;
    }

    cout << factmod(n, m) << endl;

  }
  return 0;
}
