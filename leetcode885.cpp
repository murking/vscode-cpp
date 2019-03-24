//
//  leetcode885.cpp
//  面试
//
//  Created by zjh-mac on 2018/10/8.
//  Copyright © 2018 zjh-mac. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
//int main(){
//    
//    int limit;
//    string input;
//    while(getline(cin, input)){
//    stringstream stringin(input);
//    int num;
//    vector<int> people;
//    while (stringin >> num) {
//        people.push_back(num);
//    }
//    cin>>limit;
//    sort(people.begin(), people.end());
//        if(people[0]+people[1]>limit){
//        cout<<people.size()<<endl;
//            getline(cin, input);
//            continue;
//            
//        }
//    int result =0;
//    vector<int>::iterator it1=people.begin();
//    vector<int>::iterator it2=people.end()-1;
//    for(;it1<=it2;){
//        while((*it1+*it2)>limit){
//            result++;it2--;
//            
//        }
//        if(it1>it2)
//            break;
//        else{
//            it1++;it2--;result++;
//        }
//        
//    }
//    cout<<result<<endl;
//        getline(cin, input);
//    }
//    return 0;
//}

