//
//  main.cpp
//  robotopia
//
//  Created by Garrett Wang on 9/24/16.
//  Copyright © 2016 Garrett Wang. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    while (n--){
        int l1, l2, a1, a2, lt, at;
        cin >> l1;
        cin >> a1;
        cin >> l2;
        cin >> a2;
        cin >> lt;
        cin >> at;
        int x = 1;
        bool flag = true;
        int count = 0;
        int xf,yf;
        while(l1 * x < lt){
            float y1 = (lt - l1 * x)/(float)l2;
            float y2 = (at - a1 * x)/(float)a2;
            if(y1 == y2 && x > 0 && y1 > 0 && ((int)y1 == y1)){
                xf = x;
                yf = y1;
                flag = false;
                count ++;
                x++;
                if(count == 2){
                    cout << "?" << endl;
                    break;
                    
                }
            }
            else
                x++;
        }
        if (flag)
            cout << "?" << endl;
        else if(count == 1)
            cout << xf << " " << yf << endl;
    }

    
    
    return 0;
}
