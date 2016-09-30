//
//  main.cpp
//  simonsays
//
//  Created by Garrett Wang on 9/14/16.
//  Copyright © 2016 Garrett Wang. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const int maxn1 = 1000 + 5;
const int maxn2 = 1000+ 5;
string a[maxn1][maxn2];
int b[maxn2] = {0};

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    getchar();

    for(int i = 0; i < n; i++){
        string line;
        getline(cin, line);
        stringstream ss(line);
        int j = 0;
        while(ss >> a[i][j]) j++;
        
        b[i] = j;
    }
    
    for(int i = 0; i < n; i++){
        if(a[i][0] == "Simon" && a[i][1] == "says"){
            b[i] -= 2;
            int k = 2;
            while(b[i] --){
                cout << a[i][k] << ' ';
                k++;
            }
            cout << endl;
        }
//        else
//            cout << ' ' << endl;
    }
        
    return 0;
}
