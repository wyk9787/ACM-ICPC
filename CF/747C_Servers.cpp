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

typedef long long ll;

using namespace std;

int main(int argc, char const *argv[]) {
  int n, q;
  cin >> n >> q;
  vector<ll> servers(n);
  for (int i = 0; i < q; i++) {
    int t, k, d;
    cin >> t >> k >> d;
    vector<ll> temp;
    int sum = 0, count = 0;
    for (int j = 0; j < n; j++) {
      if (servers[j] <= t) {
        sum += j + 1;
        count++;
        temp.push_back(j);
      }
      if (count == k)
        break;
    }
    if (count == k) {
      cout << sum << endl;
      for (int m = 0; m < temp.size(); m++)
        servers[temp[m]] = d + t;
    } else if (count < k)
      cout << -1 << endl;
    temp.clear();
  }
  return 0;
}
