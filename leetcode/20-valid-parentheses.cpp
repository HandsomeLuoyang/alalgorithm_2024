//
// Created by yannicklei on 2024/9/12.
//
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (auto cs: s) {
            if(cs == '(' || cs == '[' || cs == '{')
                stk.push(cs);
            else {
                if (stk.empty()) return false;
                switch (cs) {
                    case ')':
                        if(stk.top() != '(') return false;
                        break;
                    case ']':
                        if(stk.top() != '[') return false;
                        break;
                    case '}':
                        if(stk.top() != '{') return false;
                        break;
                }
                stk.pop();
            }
        }
        return stk.empty();
    }
};