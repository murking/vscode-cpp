
//
//  leetcode3.cpp
//  面试
//
//  Created by zjh-mac on 2019/1/9.
//  Copyright © 2019 zjh-mac. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int pla[128];
        int flag = 0;
        int tem;
        int result=0;
        memset(pla, -1, sizeof(pla));
        for (int i=0; i<s.length(); i++) {
            tem=pla[s[i]];
            pla[s[i]]=i;
            if (tem>=flag) {
                result = result>i-flag?result:i-flag;
                flag=tem+1;
            }
        }
        result = result>s.length()-flag?result:s.length()-flag;
        return result;
    }
};
int main(){
    Solution s;
    s.lengthOfLongestSubstring("abcabcbb");
    return 0;
}
