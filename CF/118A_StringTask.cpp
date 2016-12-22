#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {

  int lst[] = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};
  string m;
  string n = "";
  cin >> m;
  bool flag = true;
  for(int i = 0; i < m.length(); i++){
    for(int j = 0 ; j < 12; j++){
        if(m[i] == lst[j])
            flag = false;
    }
    // cout << n << endl;
    if(flag){
      stringstream ss;
      ss << (char)tolower(m[i]) << endl;
      string s;
      ss >> s;
      n += "." + s;
    }
      flag = true;
  }
  cout.precision(200);
  cout << n << endl;
  return 0;
}
