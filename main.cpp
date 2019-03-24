//
//  main.cpp
//  面试
//
//  Created by zjh-mac on 2018/9/16.
//  Copyright © 2018年 zjh-mac. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <map>
using namespace std;
int n,m,t;
map<int, int> food;
int a[102];
int result;
void find_food(int i){
    if (i<=n) {
        for (int z=0; z<m; z++) {
            a[i]=z;
            find_food(i+1);
            
        }
    }
    else{
        int tem=0;
        while (true) {
            bool go = false;
            for (int i=0; i<n; i++) {
                int t = --food[a[i]];
                if (t<0) {
                    go=false;
                }
            }
            
        }
    }
}
//int main(){
//    while (cin>>n>>m) {
//        for (int i=0; i<m; i++) {
//            cin>>t;
//            if (food.find(t) != food.end() ) {
//                food[t]++;
//            }
//            else
//                food[t]=0;
//        }
//        cout<<int(m/n)<<endl;
//    }
//    return 0;
//}

/*
 
 4 10
 1 5 2 1 1 1 2 5 7 2
 
 */
