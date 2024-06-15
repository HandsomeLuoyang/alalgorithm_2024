/**
 * Created by leiyang on 2024/5/29 20:32
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        target+= accumulate(nums.begin(), nums.end(), 0);
        if (target<0||target%2) return 0;
        target/=2;
        vector<vector<int>> f(nums.size()+2, vector<int>(target+2, 0));
        f[0][0] = 1;
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<=target;j++){
                if(j<nums[i]){
                    f[i+1][j] = f[i][j];
                }
                else{
                    f[i+1][j] = f[i][j] + f[i][j-nums[i]];
                }
            }
        }
        return f[nums.size()][target];
    }
};


int main() {
    Solution s;
    vector<int> nums = {1,1,1,1,1};
    cout<<s.findTargetSumWays(nums, 3);

    return 0;
}
