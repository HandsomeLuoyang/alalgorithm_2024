/**
 * Created by leiyang on 2024/3/29 17:01
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 1);
        for(int i = 1;i<n;i++) {
            for(int j = 0;j<i;j++) {
                // dp[i] = max(dp[j]+1) where nums[i] > nums[j]
                if (nums[i]>nums[j])
                    dp[i] = max(dp[i], dp[j]+1);
            }
        }
        int result = dp[0];
        for (int dp1 : dp) {
            result = max(result, dp1);
        }
        return result;
    }
};


int main(){
    
    
    return 0;
}
