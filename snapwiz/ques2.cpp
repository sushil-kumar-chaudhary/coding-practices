#include <bits/stdc++.h>

using namespace std;

int helper(int n) {

  int extra = 0;
  if (n % 5) {
    extra++;
  }

  return (n / 5) + extra;

}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << helper(n) << '\n';
  }
  return 0;
}