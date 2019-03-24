//
//  招商1.cpp
//  面试
//
//  Created by zjh-mac on 2018/10/8.
//  Copyright © 2018 zjh-mac. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int  c = 0;
int  comb1(int m,int k)//(C(m,k))
{
    int i;
    for (i=m;i>=k;i--)
    {
        if (k>1)
        {
            comb1(i-1,k-1);
        }
        else
        {
            c++;
            //cout<<m<<":"<<i<<",";
        }
    }
    
    
    return c;
}
//int main(){
//    int n;
//    while (cin>>n) {
//        int result = 0;
//        for (int i=1; i<=2; i++) {
//            c=0;
//            result+=comb1(n, i);
//        }
//        cout<<result+1<<endl;
//    }
//    return 0;
//}
