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
  int m, n;
  cin >> m >> n;
  if (m == 0 && n == 0) {
    cout << "NO" << endl;
    return 0;
  }
  if (abs(m - n) == 1 || m == n) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
