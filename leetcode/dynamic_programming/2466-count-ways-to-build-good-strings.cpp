/**
 * Created by leiyang on 2024/6/3 15:55
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        int MOD = 1e9 + 7;
        vector<int> dp(high + 2, 0);
        // f(i) = f(i-zero)+f(i-one)
        dp[0] = 1;
        int ans = 0;
        for (int i = 1; i <= high; i++) {
            if (i >= zero) dp[i] = (dp[i] + dp[i - zero]) % MOD;
            if (i >= one) dp[i] = (dp[i] + dp[i - one]) % MOD;
            if (i >= low) ans = (ans + dp[i]) % MOD;
        }
        return ans;
    }
};


int main() {


    return 0;
}
