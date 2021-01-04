#include <bits/stdc++.h>

using namespace std;

int scanNum() {
  int n;
  cin >> n;
  return n;
}

vector < int > scanVec() {

  int n = scanNum();
  vector < int > v;
  for (int i = 0; i < n; i++) {
    int number = scanNum();
    v.push_back(number);
  }
  return v;
}

void printVec(vector < int > v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}
int main() {
  vector < int > arr = scanVec();
  printVec(arr);

  return 0;
}
