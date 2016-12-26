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

struct bids {
  int index;
  int bids;
};

int main(int argc, char const *argv[]) {
  struct bids b[200005];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> b[i].index >> b[i].bids;
  }
  int m;
  cin >> m;
  int absence[200005][200005];
  int j = 0;
  while (m--) {
    int temp;
    cin >> temp;
    absence[j][0] = temp;
    for (int i = 1; i <= temp; i++) {
      cin >> absence[j][i];
    }
    j++;
  }
  for (int i = 0; i < m; i++) {
    struct bids *temp = b;
    for (int k = 0; k < n; k++) {
      for (int j = 1; j <= absence[i][0]; j++) {
        if (b[])
      }
    ]
    for (int i = n - 1; i >= 0; i--) {
      if (tmp[i] != 0)
        if ()
    }
    }

    return 0;
  }
