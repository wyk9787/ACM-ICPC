////
////  main.cpp
////  phoneList
////
////  Created by Garrett Wang on 9/22/16.
////  Copyright © 2016 Garrett Wang. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(string str1, string str2){
//    if(str1.size() < str2.size())
//        return false;
//    else
//        return true;
//}
//int main(int argc, const char * argv[]) {
//    int n ;
//    cin >> n;
//    while(n--){
//        int m;
//        cin >> m;
//        vector<string> phone(m);
//        int test_case = m;
//        for(int i = 0; i < test_case; i++){
//            string a;
//            cin >> a;
//            phone[i] = a;
//        }
//        bool flag = false;
//        stable_sort(phone.begin(), phone.end(), compare);
//        for(int i = 0; i < test_case; i ++){
//            if(flag)
//                break;
//            for(int j = i+1; j < test_case; j++){
//                if(phone[i].find(phone[j]) == 0){
//                    cout << "NO" << endl;
//                    flag = true;
//                    break;
//                }
//            }
//        }
//        if(!flag)
//            cout << "YES" << endl;
//
//    }
//    return 0;
//}
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <iterator>
#include <list>
#include <algorithm>
#include<math.h>
#include <stdint.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define array_size(array) (sizeof(array)/sizeof(array[0]))
#define max(a, b) ((a >= b) ? (a) : (b))
#define min(a, b) ((a <= b) ? (a) : (b))


using

namespace std;


typedef uint8_t u8;

typedef uint16_t u16;

typedef uint32_t u32;

typedef uint64_t u64;

typedef int8_t i8;

typedef int16_t i16;

typedef int32_t i32;

typedef int64_t i64;

typedef float r32;

typedef double r64;

typedef int b32;


struct node_t
{
    int val;
    b32 end;
    node_t *nodes[10];
};


node_t *make_node(char val, b32 end)
{
    node_t *node
    = (node_t
       
       *)malloc(sizeof(node_t));
    
    memset(node,
           
           0,
           
           sizeof(node_t));
    
    node->val
    
    = val;
    
    node->end
    
    = end;
    
    return
    node;
    
}


void
free_tree(node_t
          
          *t)

{
    
    if(t)
        
    {
        
        for(int
            i
            =
            0;
            i
            <
            10;
            i++)
            
        {
            
            if(t->nodes[i])
                
            {
                
                free_tree(t->nodes[i]);
                
            }
            
        }
        
        free(t);
        
    }
    
}


int
main()

{
    
    int
    n;
    
    cin
    
    >> n;
    
    
    for(int
        i
        =
        0;
        i
        < n;
        i++)
        
    {
        
        int
        m;
        
        cin
        
        >> m;
        
        node_t
        
        *root
        = make_node(0,
                    
                    false);
        
        node_t
        
        *cur_node
        
        = root;
        
        b32
        bad
        =
        false;
        
        
        for(int
            j
            =
            0;
            j
            < m;
            j++)
            
        {
            
            char
            num[32];
            
            cin
            
            >> num;
            
            for(int
                i
                =
                0;
                i
                <
                strlen(num);
                i++)
                
            {
                
                char
                d
                = num[i]
                
                -
                '0';
                
                if(!cur_node->nodes[d])
                    
                {
                    
                    cur_node->nodes[d]
                    
                    = make_node(d,
                                
                                false);
                    
                }
                
                cur_node
                
                = cur_node->nodes[d];
                
                
                if(cur_node->end)
                    
                {
                    
                    bad
                    
                    =
                    true;
                    
                }
                
            }
            
            
            for(int
                i
                =
                0;
                i
                <
                10;
                i++)
                
            {
                
                if(cur_node->nodes[i])
                    
                {
                    
                    bad
                    
                    =
                    true;
                    
                }
                
            }
            
            
            cur_node->end
            
            =
            true;
            
            cur_node
            
            = root;
            
        }
        
        
        if(bad)
            
        {
            
            cout
            
            <<
            "NO"
            << endl;
            
        }
        
        else
            
        {
            
            cout
            
            <<
            "YES"
            << endl;
            
        }
        
        
        free_tree(root);
        
    }
    
}
