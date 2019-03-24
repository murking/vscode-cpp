//
//  leetcode1.cpp
//  面试
//
//  Created by zjh-mac on 2018/12/13.
//  Copyright © 2018 zjh-mac. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = l1;
        int up = 0;
        while (l1!=NULL) {
            int t = l1->val+l2->val;
            t=t+up;
            up = t>10?1:0;
            result->val = t > 10? t:t-10;
            result = result->next;
            l1=l1->next;
            l2=l2->next;
        }
        return result;
    }
};
