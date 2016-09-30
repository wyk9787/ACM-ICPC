//
//  main.cpp
//  Cokolada
//
//  Created by Garrett Wang on 9/15/16.
//  Copyright © 2016 Garrett Wang. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>

using namespace std;

int main(int argc, const char * argv[]) {
    int k, p, q;
    cin >> k >> p;
    int m = k+1;
    int arr[30] = {0};
    for(int i = 0; i < 22; i++){
        arr[i] = pow(2.0, i);
    }
    for(int i = 0; i < 22; i++){
        if(arr[i] >= k){
            p = arr[i];
            q = i;
           p = q;
            //cout << p << ' ';
            break;
        }
        
    }
    while(m--){
        double a = log((double)m) / log(2.0);
        if((a - (int)a) == 0){
            k -= pow(2.0, a);
            m = k;
            double b = log((double)k) / log(2.0);
            if((b - (int)b) == 0){
                cout << q-b << endl;
                return 0;
            }
        }
    }
    cout << '0' << endl;
    return 0;
}
