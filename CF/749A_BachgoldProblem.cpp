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
  if(n % 2 == 0){
    cout << n/2 << endl;
    int m = n/2;
    while(m > 0){
      cout << "2" << ' ';
      m--;
    }
    cout << endl;
  }
  else{
    int m = (n-3)/2;
    cout << m+1 << endl;
    while(m > 0){
      cout << "2" << ' ';
      m--;
    }
    cout << "3" << endl;
  }
  return 0;
}
