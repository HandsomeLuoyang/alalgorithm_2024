/**
 * Created by leiyang on 2024/6/2 22:37
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // f(n) = min(f(n-1)+cost(n-1), f(n-2)+cost(n-2))
        vector<int> dp(cost.size()+1, INT32_MIN);
        dp[0] = 0;
        dp[1] = 0;
        if(cost.size()==2) return min(cost[0], cost[1]);
        for(int i = 2;i<=cost.size();i++){
            dp[i] = min(dp[i-2]+cost[i-2], dp[i-1]+cost[i-1]);
        }
        return dp[cost.size()];
    }
};

int main() {


    return 0;
}
