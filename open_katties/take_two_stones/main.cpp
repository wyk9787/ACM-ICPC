//
//  main.cpp
//  takeTwoStones
//
//  Created by Garrett Wang on 9/21/16.
//  Copyright © 2016 Garrett Wang. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0 ;
    cin >> n;
    if(n % 2 == 1)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
    
    return 0;
    
}
