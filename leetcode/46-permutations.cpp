/**
 * Created by leiyang on 2024/3/29 15:05
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int> > ans;

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> path;
        vector<int> vis(n, 0);

        function<void(int)> dfs = [&](int i){
            if(path.size() == n){
                ans.push_back(path);
                return ;
            }
            for(int j = 0;j<n;j++){
                if (!vis[j])
                {
                    path.push_back(nums[j]);
                    vis[j] = 1;
                    dfs(j+1);
                    path.pop_back();
                    vis[j] = 0;
                }
            }
        };
        dfs(0);
        return ans;

    }
};

int main(){
    vector<int> nums = {1,2,3};
    Solution s;
    s.permute(nums);
    return 0;
}
