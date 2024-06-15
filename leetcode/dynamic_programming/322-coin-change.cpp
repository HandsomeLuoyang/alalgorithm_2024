/**
 * Created by leiyang on 2024/5/30 0:51
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int ans = INT32_MAX;
    int coinChange(vector<int>& coins, int amount) {
        reverse(coins.begin(), coins.end());
        dfs(coins, amount, 0, 0, 0);
        return ans == INT32_MAX?-1:ans;
    }

    void dfs(vector<int> coins, int amount, long long cur, int i, int count){
//        cout<<i<<" "<<cur<<" "<<endl;
        if(i>coins.size() || cur>amount) return ;
        if(cur == amount)
        {
            ans = min(ans, count);
            return ;
        }
        for(int j = i;j<coins.size();j++){
            dfs(coins, amount, cur+coins[j], j, count+1);
        }
    }

};


int main() {
    vector<int> nums = {1, 2, 5};
    Solution s;
    s.coinChange(nums, 100);

    return 0;
}
