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

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  int count = 0, each_count = 0;
  while(n--){
    for(int i = 0; i < 3; i++){
      int ans;
      cin >> ans;
      if(ans == 1)
        each_count ++;
    }
    if(each_count >= 2)
      count++;
    each_count = 0;
  }
  cout << count << endl;
  return 0;
}
