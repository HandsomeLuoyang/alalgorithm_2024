/**
 * Created by leiyang on 2024/3/10 13:24
 */
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int ans = helper(nums, 0, nums.size()-1, k);
        return ans;
    }

    int helper(vector<int> & nums, int l, int r, int k) {
        if (l==r) return nums[l];
        int x = nums[l];
        int i = l-1, j = r+1;
        while(i<j) {
            do i++;while(nums[i]<x);
            do j--;while (nums[j]>x);
            if (i<j) swap(nums[i] , nums[j]);
        }
        if (nums.size()-k>j) {
            return helper(nums, j+1, r, k);
        }
        else {
            return helper(nums, l, j, k);
        }
    }
};


int main(){
    vector<int> nums = {5,2,4,1,3,6,0};
    Solution s;
    cout<<s.findKthLargest(nums, 4)<<endl;
    return 0;
}
