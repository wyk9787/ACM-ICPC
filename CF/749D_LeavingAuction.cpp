#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;

int main(int argc, char const *argv[]) {

  int n;
  cin >> n;
  vector<int> vec(200005);
  int x = n;
  while(x--){
    int temp;
    cin >> temp;
    cin >> vec[temp];
  }
  int m;
  cin >> m;
  int absence[200005][200005];
  int j = 0;
  while(m--){
    int temp;
    cin >> temp;
    absence[j][0] = temp;
    for(int i = 1; i <= temp; i++){
      cin >> absence[j][i];
    }
    j++;
  }

  for(int i = 0; i < m; i++){
    vector<int> tmp = vec;
    for(int j = 0; j < absence[i][0]; j++){
      tmp[absence[i][j]] = 0;
    }
    int max = -1;
    for(int i = n-1; i >= 0; i--){
      if(tmp[i] != 0)
        
    }

  }

  return 0;
}
