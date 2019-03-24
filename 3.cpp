//
//  3.cpp
//  面试
//
//  Created by zjh-mac on 2018/9/16.
//  Copyright © 2018年 zjh-mac. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
int ss[10000];//商们
int num;
int col;
bool check(int s){
    for (int i=0; i<num; i++) {
        if (ss[i]==s) {
            return true;
        }
    }
    return false;
}
void cal(int a,int b,int c)
{
    int s,r;
    s=a/b;
    r=a%b;
    if (r==c) {
        cout<<"YES"<<endl;
        return;
    }
    else if (!check(s)) {
        ss[num++]=s;
        if (num>9999) {
            cout<<"NO"<<endl;
            return;
        }
        cal(a+col, b, c);
            }
    else
        cout<<"NO"<<endl;
}
int main(){
   int t;
   cin>>t;
   while (t--) {
       int a,b,c;
       num=0;
       cin>>a>>b>>c;
       col=a;
       cal(a,b,c);
       
   }
   return 0;
}
/*
 3
 91 16 5
 58 16 0
 96 12 4
 */
