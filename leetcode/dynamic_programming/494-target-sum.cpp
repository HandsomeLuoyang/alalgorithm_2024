/**
 * Created by leiyang on 2024/5/29 20:32
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        // 枚举+,-号
        target+= accumulate(nums.begin(), nums.end(), 0);
        if (target<0||target%2)
            return 0;
        target/=2;

        vector<vector<int>> f(nums.size()+1, vector<int>(target+1, 0));
        f[0][0] = 1;
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<=target;j++){
                if(nums[i]>j){
                    f[i+1][j] = f[i][j];
                }
                else{
                    f[i+1][j] = f[i][j] + f[i][j-nums[i]];
                }
            }
        }
        return f[nums.size()][target];
//        return dfs(nums, nums.size()-1, target);
    }

    int dfs(vector<int>& nums, int i, int cap){
        if(i < 0){
            if (cap == 0) return 1;
            return 0;
        }
        if(cap<nums[i]){
            dfs(nums, i-1, cap);
        }
        return dfs(nums, i-1, cap) + dfs(nums, i-1, cap-nums[i]);
    }
};


int main() {
    Solution s;
    vector<int> nums = {1,1,1,1,1};
    s.findTargetSumWays(nums, 3);

    return 0;
}
