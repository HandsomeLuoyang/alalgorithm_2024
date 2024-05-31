/**
 * Created by leiyang on 2024/5/30 0:51
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        //        int ans = dfs(coins, amount, coins.size()-1);
        //        return ans==1e5?-1:ans;
        vector<vector<int>> dp(coins.size()+1, vector<int> (amount+1, 1e5));
        dp[0][0] = 0;
        for(int i = 0;i<coins.size();i++){
            for(int j = 0;j<=amount;j++){
                if (j<coins[i]){
                    dp[i+1][j] = dp[i][j];
                }
                else{
                    dp[i+1][j] = min(dp[i][j], dp[i+1][j-coins[i]]+1);
                }
            }
        }
        int ans = dp[coins.size()][amount];
        return ans==1e5?-1:ans;


    }

    int dfs(vector<int>& coins, int amount, int i){
        if(i<0){
            if(amount == 0) return 0;
            return 1e5;
        }
        if(amount<coins[i]){
            return dfs(coins, amount, i-1);
        }
        return min(dfs(coins, amount, i-1), dfs(coins, amount-coins[i], i)+1);
    }
};


int main() {


    return 0;
}
