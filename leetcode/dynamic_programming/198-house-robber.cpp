/**
 * Created by leiyang on 2024/5/29 17:13
 */
#include <bits/stdc++.h>

using namespace std;

// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         if (nums.size() == 1) return nums[0];
//         const int maxn = 105;
//         int dp[maxn];
//         memset(dp, 0, sizeof(dp));
//         dp[0] = nums[0];
//         dp[1] = max(nums[0], nums[1]);
//         for (int i = 2;i<nums.size();i++) {
//             dp[i] = max(dp[i-1], dp[i-2]+nums[i]);
//         }
//         return dp[nums.size()-1];
//     }
// };

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int a = nums[0];
        int b = max(nums[0], nums[1]);
        int c = max(a, b);
        for (int i = 2;i<nums.size();i++) {
            c = max(b, a+nums[i]);
            a = b;
            b = c;
        }
        return c;
    }
};

int main() {


    return 0;
}
