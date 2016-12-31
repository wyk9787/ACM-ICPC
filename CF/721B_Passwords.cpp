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

bool myCompare(string a, string b) { return a.length() < b.length(); }

int findRest(vector<string> &ss, int start) {
  int count = 0;
  for (int i = start + 1; i < ss.size() - 1; i++) {
    if (ss[i].length() == ss[i - 1].length())
      count++;
    else
      return count;
  }
  return count;
}

int findBefore(vector<string> &ss, int start) {
  int count = 0;
  for (int i = start - 1; i >= 0; i--) {
    if (ss[i].length() == ss[i + 1].length())
      count++;
    else
      return count;
  }
  return count;
}

int main(int argc, char const *argv[]) {
  int n, k;
  cin >> n >> k;
  vector<string> ss(n + 1);
  for (int i = 0; i < n + 1; i++) {
    cin >> ss[i];
  }
  sort(ss.begin(), ss.end() - 1, myCompare);
  int min = 0, max = 0, interval = 0, count = 0;
  // for (int i = 0; i < n; i++) {
  //   cout << ss[i] << ' ';
  // }
  // cout << endl;
  for (int i = 0; i < ss.size() - 1; i++) {
    count++;
    interval++;
    if (ss[i] == ss[ss.size() - 1]) {
      int before = findBefore(ss, i);
      int temp = i - before;
      int rest = findRest(ss, i);
      min = count - i / k * 5 + (i - before) / k * 5 - before;
      max = count - i / k * 5 + (i + rest) / k * 5 + rest;
      break;
    }
    if (interval == k) {
      count += 5;
      interval = 0;
    }
  }
  cout << min << " " << max << endl;
  return 0;
}
