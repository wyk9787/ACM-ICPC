//
//  main.cpp
//  Bijele
//
//  Created by Garrett Wang on 9/18/16.
//  Copyright © 2016 Garrett Wang. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a[6];
    for(int i = 0; i < 6; i++)
        cin >> a[i];
    cout << 1-a[0] << ' ' << 1-a[1] << ' ' << 2-a[2] << ' ' << 2-a[3] << ' ' << 2-a[4] << ' ' << 8-a[5] << endl;
    
}
