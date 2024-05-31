/**
 * Created by leiyang on 2024/3/20 10:42
 */
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size()<=2) return nums[0];
        unordered_map<int, int> map;
        for (int num : nums) {
            map[num] ++;
        }
        int _max = INT_MIN;
        int ans;
        for (auto pair : map) {
            if (pair.second>_max) {
                _max = pair.second;
                ans = pair.first;
            }
        }
        return ans;

    }
};

int main(){
    
    
    return 0;
}
