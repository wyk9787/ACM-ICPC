//
//  main.cpp
//  test
//
//  Created by Garrett Wang on 12/21/16.
//  Copyright © 2016 Garrett Wang. All rights reserved.
//

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

//Naive Algorithm
// int main(int argc, char const *argv[]) {
//   int n;
//   cin >> n;
//   string s;
//   cin >> s;
//   bool flag = true;
//   int i = 0;
//   while(true){
//     if(s[i] == 'D'){
//       for(int j = 0; j < n; j++){
//         if(s[j] == 'R'){
//           s[j] = ' ';
//           flag = false;
//           break;
//         }
//       }
//       if(flag){
//         cout << 'D' << endl;
//         break;
//       }
//       flag = true;
//     }
//     else if (s[i] == 'R'){
//       for(int j = 0; j < n; j++){
//         if(s[j] == 'D'){
//           s[j] = ' ';
//           flag = false;
//           break;
//         }
//       }
//       if(flag){
//         cout << 'R' << endl;
//         break;
//       }
//       flag = true;
//     }
//     i++;
//     i = i % n;
//   }
//
//   return 0;
// }

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = true, flag2 = true;
    int i = 0;
    queue<int> q;
    while(s.length() > 1 && q.size() <= s.length()){
        if(q.empty()){
            q.push(s[i]);
        }
        else{
            if(s[i] == 'D'){
                if(q.front() == 'D')
                    q.push(s[i]);
                else{
                    q.pop();
                    s = s.erase(i, 1);
                    i--;
                    // cout << "debug1: s = " << s << endl;
                }
            }
            else if(s[i] == 'R'){
                if(q.front() == 'R')
                    q.push(s[i]);
                else{
                    q.pop();
                    s = s.erase(i, 1);
                    i--;
                    // cout << "debug2: s = " << s << endl;
                }
            }
        }
        i++;
        i = i % s.length();
        // cout << "debug: q = ";
        // for(int m = 0; m < q.size(); m ++)
            // cout << q.front() << ' ';
        // cout << endl;

    }
    int q_size = q.size();
    int s_len = s.length();
    if(s_len <= 1)
        cout << s << endl;
    else if (q_size > s_len)
        cout << (char)q.front() << endl;
    return 0;
}
