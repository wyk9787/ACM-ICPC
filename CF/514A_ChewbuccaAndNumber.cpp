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
  string s;
  cin >> s;
  bool flag = true;
  for (int i = 0; i < s.length(); i++) {
    int temp = s[i] - 48;
    if (i == 0 && temp == 9) {
      cout << "9";
      continue;
    }

    if (temp > 4)
      temp = 9 - temp;
    cout << temp;
  }
  cout << endl;
  return 0;
}
