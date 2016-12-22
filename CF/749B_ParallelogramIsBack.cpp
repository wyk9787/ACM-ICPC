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

struct Points{
  int x;
  int y;
};

int main(int argc, char const *argv[]) {
  struct Points point[10];
  struct Points vec[10];
  for(int i = 0; i < 3; i++){
    cin >> point[i].x;
    cin >> point[i].y;
  }

  point[3].x = point[0].x + point[1].x - point[2].x;
  point[3].y = point[0].y + point[1].y - point[2].y;
  point[4].x = point[0].x + point[2].x - point[1].x;
  point[4].y = point[0].y + point[2].y - point[1].y;
  point[5].x = point[2].x + point[1].x - point[0].x;
  point[5].y = point[2].y + point[1].y - point[0].y;
  cout << "3" << endl;
  for(int i = 3; i < 6; i++){
    cout << point[i].x << ' ' << point[i].y << endl;
  }
  return 0;
}
