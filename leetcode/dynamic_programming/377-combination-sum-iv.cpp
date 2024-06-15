/**
 * Created by leiyang on 2024/6/2 22:44
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
//    int ans = 0;
    int combinationSum4(vector<int>& nums, int target) {
        // f(i) = sum(f[i-nums[j] j_0-nums.size()-1)
        vector<unsigned> dp(target+2, 0);
        dp[0] = 1;
        for(int i = 0;i<=target;i++){
            for(auto x:nums){
                if(i>=x){
                    dp[i]+=dp[i-x];
                }
            }
        }
        return dp[target];
    }
};

int main() {


    return 0;
}
