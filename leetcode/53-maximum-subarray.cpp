/**
 * Created by leiyang on 2024/3/12 23:40
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // 前缀和做法
        if (nums.size() == 1) return nums[0];
        vector<int> preSum;
        preSum.push_back(0);
        for (int i = 1; i < nums.size()+1; ++i) {
            preSum.push_back(preSum[i-1] + nums[i-1]);
        }

        int _min = 99999999;
        int _max = -99999999;
        for (int i = 0; i < preSum.size()-1; ++i) {
            _min = min(_min, preSum[i]);
            _max = max(_max, preSum[i+1] - _min);
        }
        return _max;
    }
};


int main(){
    
    
    return 0;
}
