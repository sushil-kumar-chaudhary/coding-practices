#include <bits/stdc++.h>

using namespace std;

vector < int > points[100];
set < int > corx;;

bool exists(int x, int y) {

  if (corx.find(x) == corx.end())
    return false;

  return binary_search(points[x].begin(), points[x].end(), y);

}
int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {

    int x, y;
    cin >> x >> y;
    points[x].push_back(y);
    corx.insert(x);
  }

  for (auto it = corx.begin(); it != corx.end(); it++) {

    sort(points[ * it].begin(), points[ * it].end());

  }

  int ans = 0;

  for (auto it = corx.begin(); it != corx.end(); it++) {

    int m = points[ * it].size();

    for (int j = 0; j < m; j++) {
      for (int k = j + 1; k < m; k++) {

        int y1 = points[ * it][j];
        int y2 = points[ * it][k];
        int a = abs(y1 - y2);
        int x = * it;
        if (exists(x + a, y1) && exists(x + a, y2))
          ans++;

      }
    }

  }

  cout << ans << endl;

  return 0;
}
