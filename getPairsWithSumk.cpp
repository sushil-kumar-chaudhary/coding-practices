#include <iostream>

using namespace std;

vector < pair < int, int >> getPairsWithSumkN2(vector < int > v, int k) {
  int n = v.size();
  vector < pair < int, int >> res;
  for (int i = 0; i < n; i++) {

    int first = v[i];
    int mate = k - v[i];

    for (int j = i + 1; j < n; j++) {

      if (mate == v[j]) {
        res.push_back({
          first,
          mate
        });
      }
    }
  }
}

int getMax(vector < int > v) {
  int res = INT_MIN;
  for (int i = 0; i < v.size(); i++) {
    res = max(res, v[i]);
  }
  return res;
}

int getMin(vector < int > v) {
  int res = INT_MAX;
  for (int i = 0; i < v.size(); i++) {
    res = min(res, v[i]);
  }
  return res;
}

vector < pair < int, int >> getPairsWithSumkN(vector < int > v, int k) {
  int n = v.size();
  int maxx = getMax(v);
  int minn = getMin(v);
  int hash_size = maxx - minn + 1;
  int hash[hash_size];
  for (int i = 0; i < n; i++) {
    int key = v[i] - minn;
    hash[key] = 1;
  }
  vector < pair < int, int >> res;
  for (int i = 0; i < n; i++) {

    int first = v[i];
    int mate = k - v[i];
    int keyFormate = mate - minn;
    if (hash[mate - minn]) {
      res.push_back({
        first,
        mate
      });
    }
  }
  return res;
}

int main() {
  // your code goes here
  return 0;
}
