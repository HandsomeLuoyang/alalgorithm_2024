/**
 * Created by leiyang on 2024/5/29 17:13
 */
#include <bits/stdc++.h>

using namespace std;

//class Solution {
//public:
//    int ans = 0;
//
//    int rob(vector<int>& nums) {
//        vector<int> cache(nums.size(), -1);
//
//        function<int(int)> dfs = [&](int i){
//            if (i<0){
//                // 代表已经递归完了
//                return 0;
//            }
//            if (cache[i]!=-1) return cache[i];
//            ans = max(dfs(i-1), dfs(i-2)+nums[i]);
//            cache[i] = ans;
//            return ans;
//        };
//
//        dfs(nums.size()-1);
//        return ans;
//    }
//};

//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        if (nums.size() == 1) return nums[0];
//        // 递归省去递的过程，只留下归，也就是直接递推
//        vector<int> dp(nums.size(), 0);
//        dp[0] = nums[0];
//        dp[1] = max(nums[0], nums[1]);
//        for(int i = 2;i<nums.size();i++){
//            dp[i] = max(dp[i-1], dp[i-2]+nums[i]);
//        }
//        return dp[nums.size()-1];
//    }
//};

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        // 可以只存两个值
        int f0 = 0;
        int f1 = 0;
        int new_f = 0 ;
        for(int i = 0;i<nums.size();i++){
            new_f = max(f1, f0+nums[i]);
            f0 = f1;
            f1 = new_f;
        }
        return new_f;
    }
};

int main() {


    return 0;
}
