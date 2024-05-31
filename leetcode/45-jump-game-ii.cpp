/**
 * Created by leiyang on 2024/3/20 12:31
 */
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size()<2) return 0;
        // int dp[10002] = {10002};
        vector<int> dp(10002,10002);

        dp[0] = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++) {
            cout<<dp[i]<<" ";
        }
        for(int i = 0;i<n;i++) {
            for(int j = 0;j<=nums[i] && i+j<n;j++) {
                dp[i+j] = min(dp[i]+1, dp[i+j]);
            }
        }
        for(int i = 0;i<n;i++) {
            cout<<dp[i]<<" ";
        }
        return dp[n-1];
    }
};
int main(){
    Solution s;
    vector<int> nums = {2,3,1,1,4};
    s.jump(nums);
    return 0;
}
