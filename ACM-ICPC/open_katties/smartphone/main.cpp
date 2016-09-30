//
//  main.cpp
//  Smartphone
//
//  Created by Garrett Wang on 9/16/16.
//  Copyright © 2016 Garrett Wang. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

string t[300];

int compareTwoString(string str1, string str2){
    int count = 0;
    for(int i =0; i < str1.size(); i++)
        if(str1[i] == str2[i])
            count ++;
        else
            return count;
    return count;
}

int minN(int* a){
    int min = 100;
    for(int i = 0; i < 4; i ++){
        if(a[i] < min)
            min = a[i];
    }
    return min;
}

//int maxnNo(int* a){
//    if(a[1] > a[2])
//        if(a[1] > a[3])
//            return 1;
//        else
//            return 3;
//        else
//            if(a[2] > a[3])
//                return 2;
//            else
//                return 3;
//}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for(int i = 0; i < 5*n; i++){
        cin >> t[i];
    }
    int j = 0;
    int countSugg[4] = {0};
    int flag = 0;
    for(int i = 1; i < 5*n;i++){
        int repet = compareTwoString(t[j], t[i]);
        if(i == flag+1)
            countSugg[i-flag-1] = t[i].size()-repet + t[flag].size() - repet;
        else
            countSugg[i-flag-1] = 1 + t[i].size() - repet + t[flag].size() - repet;
        if(i == flag+4){
            cout << minN(countSugg) << endl;
            flag += 5;
            i++;
            j = i;
        }
    }
    return 0;
        
}
