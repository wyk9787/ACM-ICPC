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
    int n, k;
    cin >> n >> k;
    int left = 4 * 60 - k;
    left /= 5;
    int count = 0;
    bool flag = true;
    for(int i = 1; i <= n; i++){
        count += i;
        if(count > left){
            cout << i-1 << endl;
            flag = false;
            break;
        }
        else if (count == left){
            cout << i << endl;
            flag = false;
            break;
        }
    }
    if(flag)
        cout << n << endl;
    return 0;
}
