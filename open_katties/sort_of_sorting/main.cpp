////
////  main.cpp
////  sortOfSorting
////
////  Created by Garrett Wang on 9/21/16.
////  Copyright © 2016 Garrett Wang. All rights reserved.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
////int sort_sort(string str1, string str2){
////    if(str1[0] > str2[0])
////        return 1;
////    else if(str1[0] < str2[0])
////        return -1;
////    else{
////        if(str1[1] > str2[1])
////            return 1;
////        else if(str1[1] < str2[1])
////            return -1;
////        else
////            return 0;
////    }
////}
//
//bool lexical_compare (string str1, string str2){
//    if(str1[0] > str2[0])
//        return false;
//    else if(str1[0] < str2[0])
//        return true;
//    else{
//        if(str1[1] > str2[1])
//            return false;
//        else if(str1[1] < str2[1])
//            return true;
//        else
//            return false;
//    }
//}
//
//
//int main(){
//    
//    int n ;
//    cin >> n;
//    while(n != 0){
//        vector <string> a(n);
//        for(int i =0; i < n; i ++)
//            cin >> a[i];
////        for(int i = 0; i < n; i++)
////            for(int j = i; j < n; j++){
////                if(sort_sort(a[i], a[j]) == 1){
////                    string temp = a[i];
////                    a[i] = a[j];
////                    a[j] = temp;
////                }
////            }
//        stable_sort(a.begin(), a.end(), lexical_compare);
//        for(int i =0; i < n; i ++)
//            cout << a[i] << endl;
//        cin >> n;
//    }
//}



