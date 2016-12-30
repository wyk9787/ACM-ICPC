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
  int pos = 0;
  for (int i = 0; i < n; i++) {
    int dis;
    string s;
    cin >> dis >> s;
    if (s[0] == 'W' || s[0] == 'E') {
      if (pos == 0 || pos == 20000) {
        cout << "NO" << endl;
        return 0;
      }
    }
    if ((s[0] == 'S' && pos == 20000) || (s[0] == 'N' && pos == 0)) {
      cout << "NO" << endl;
      return 0;
    }
    if (s[0] == 'S')
      pos += dis;
    else if (s[0] == 'N')
      pos -= dis;
    if (pos < 0 || pos > 20000) {
      cout << "NO" << endl;
      return 0;
    }
  }
  if (pos == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
