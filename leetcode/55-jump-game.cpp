/**
 * Created by leiyang on 2024/3/20 11:07
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()<2) return true;
        int dp[10002] = {0};
        int n = nums.size();
        for(int i = 0;i<n-1;i++) {
            // 初始化
            if(i+nums[i]>=n-1) dp[i] = 1;
        }
        for (int i = n-1;i>=0;i--) {
            for(int j = 1;i+j<n && j<=nums[i];j++) {
                dp[i] = max(dp[i+j], dp[i]);
            }
        }
        for(int i = 0;i<n;i++) {
            cout<<dp[i]<<" ";
        }
        return dp[0]>0;
    }
};


int main(){
    vector<int> nums = {3,2,1,0,0};
    Solution s;
    s.canJump(nums);
    return 0;
}
