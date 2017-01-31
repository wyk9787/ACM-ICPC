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
  int n, L;
  cin >> n >> L;
  vector<int> a(n), b(n);
  set<int> A, B;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < L; j++) {
      for (int k = 0; k < n; k++) {
        A.insert((i + a[k]) % L);
        B.insert((j + b[k]) % L);
      }
      if (A == B) {
        cout << "YES" << endl;
        return 0;
      }
      A.clear();
      B.clear();
    }
  }
  cout << "NO" << endl;
  return 0;
}
