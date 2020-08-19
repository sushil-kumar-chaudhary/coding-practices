#include <bits/stdc++.h>

using namespace std;

int helper(int n) {

  int totalDigit = floor(log10(n) + 1);
  int x = (pow(10, totalDigit) - 1) / 9;
  long y = totalDigit * (n + 1);
  long ans = y - x;
  return (int) ans;

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