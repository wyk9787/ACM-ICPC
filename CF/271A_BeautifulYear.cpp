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

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  for (int i = n + 1; i <= 9012; i++) {
    int d1 = i / 1000;
    int d2 = i / 100 - d1 * 10;
    int d3 = i / 10 - 100 * d1 - 10 * d2;
    int d4 = i % 10;
    if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}
