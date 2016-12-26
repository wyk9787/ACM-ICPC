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
  int m, n;
  cin >> n >> m;
  int a[m];
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  long long count = 0;
  int pos = 1;
  for (int i = 0; i < m; i++) {
    count += (a[i] - pos + n) % n;
    pos = a[i];
  }
  cout << count << endl;
  return 0;
}
