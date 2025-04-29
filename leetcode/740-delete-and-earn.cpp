/**
 * Created by leiyang on 25-4-28 下午5:39
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        const int maxn = 4005;
        int sum[maxn], dp[maxn];
        memset(sum, 0, sizeof(sum));
        // sum初始化
        for (auto num:nums) {
            sum[num]+=num;
        }
        // dp边界条件
        dp[0] = 0;
        dp[1] = sum[1];
        for (int i = 2;i<maxn;i++) {
            dp[i] = max(dp[i-1], dp[i-2]+sum[i]);
        }
        return dp[maxn-1];

    }
};

int main() {
    vector<int> nums = {1,1,1,2,4,5,5,5,6};
    Solution s;
    cout << s.deleteAndEarn(nums) << endl;

    return 0;
}
