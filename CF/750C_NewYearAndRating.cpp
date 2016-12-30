#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

const long long INF = (long long)1e8;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  int from = -INF, to = INF;
  int change = 0;
  for (int i = 0; i < n; i++) {
    int delta, d;
    cin >> delta >> d;
    if (d == 1)
      from = max(from, 1900 - change);
    else
      to = min(to, 1899 - change);
    change += delta;
  }
  if (from > to)
    cout << "Impossible" << endl;
  else if (to == INF)
    cout << "Infinity" << endl;
  else
    cout << to + change << endl;
  return 0;
}
