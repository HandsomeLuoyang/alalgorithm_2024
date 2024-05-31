/**
 * Created by leiyang on 2024/4/13 23:58
 */
#include <bits/stdc++.h>

using namespace std;


int lower_bound(vector<int> nums, int target){
    // 会返回>=target的第一个位置，如果不存在这个值，就返回了数组长额
    int l = 0, r=nums.size()-1, mid=l+r>>1;
    while(l<=r){
        if(target>nums[mid]){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
        mid = l+r>>1;
    }
    return l;
}


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int start = lower_bound(nums, target);
        if(start==nums.size() || nums[start] != target) return ans;
        int end = lower_bound(nums, target+1)-1;
        ans[0] = start;
        ans[1] = end;
        return ans;
    }
};


int main() {
    vector<int> nums = {2,4,6,8,8,8, 8, 8, 8, 10};
    int target = 12;
    cout<<lower_bound(nums, target);

    return 0;
}
