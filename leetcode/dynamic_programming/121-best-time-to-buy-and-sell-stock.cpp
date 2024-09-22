//
// Created by yannicklei on 2024/9/12.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int _min = INT32_MAX;
        int ans = 0;
        for (auto price: prices) {
            _min = min(_min, price);
            ans = max(price-_min, ans);
        }
        return ans;
    }
};

int main(){


    return 0;
}
