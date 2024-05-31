/**
 * Created by leiyang on 2024/3/11 21:30
 */
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            if(map.count(nums[i])) map[nums[i]] = i;
            map.emplace(nums[i], i);
        }
        vector<vector<int>> ans;

        int n = nums.size();
        for(int i = 0;i<n-2;i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for (int j = i+1;j<n-1;j++) {
                 // j得与上一个数不同
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                int need = -(nums[i] + nums[j]);
                if (map.count(need)&&map[need]>j) ans.push_back(vector<int> {nums[i], nums[j], need});
            }
        }
        return ans;
    }
};


int main(){

    return 0;
}
