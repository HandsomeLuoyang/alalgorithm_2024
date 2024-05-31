/**
 * Created by leiyang on 2024/4/13 17:41
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int i = 0, j = 0, cur_sum = nums[0];
        int len = nums.size();
        while (true){
            cout<<cur_sum<<" ";
            if (cur_sum>=target){
                ans = min(ans, j-i+1);
                if (cur_sum-nums[i]>=target){
                    cur_sum-=nums[i];
                    i++;
                }
                else{
                    j++;
                    if(j>=len) break;
                    cur_sum+=nums[j];

                }
            }
            else{
                j++;
                if(j>=len) break;
                cur_sum+=nums[j];
            }
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};

int main() {


    return 0;
}
