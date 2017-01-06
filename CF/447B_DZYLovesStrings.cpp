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

  string s;
  int k;
  cin >> s >> k;
  vector<int> a(26);
  for (int i = 0; i < 26; i++) {
    cin >> a[i];
  }
  ll count = 0;
  // cout << count << endl;
  for (int i = 0; i < s.length(); i++) {
    count += a[s[i] - 97] * (i + 1);
  }

  int max = a[0];
  for (int i = 1; i < 26; i++) {
    if (a[i] > max)
      max = a[i];
  }
  for (int i = s.length() + 1; i <= s.length() + k; i++) {
    count += i * max;
  }
  cout << count << endl;
  return 0;
}
