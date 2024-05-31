/**
 * Created by leiyang on 2024/5/20 22:12
 */
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(nums, 0);
        return ans;
    }
    void dfs(vector<int> nums, int i){
        int n = nums.size();
        if(i==n){
            ans.push_back(path);
            return ;
        }
        // 跳过这个数
        dfs(nums, i+1);
        // 选这个数
        path.push_back(nums[i]);
        dfs(nums, i+1);
        // 恢复现场
        path.pop_back();
    }
};


int main() {


    return 0;
}
