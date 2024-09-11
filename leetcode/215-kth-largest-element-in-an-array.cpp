/**
 * Created by leiyang on 2024/3/10 13:24
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // ¿ìÅÅË¼Ïë
        return helper(nums, 0, nums.size()-1, k);
    }

    int helper(vector<int>& nums, int l , int r, int k) {
        int c_val = nums[(l+r)>>1];
        int i = l, j = r;
        while(i<j) {
            while(nums[i]<c_val) i++;
            while(nums[j]>=c_val) j--;
            swap(nums[i], nums[j]);
        }
    }
};

int main(){
    vector<int> nums = {5,2,4,1,3,6,0};
    Solution s;
    cout<<s.findKthLargest(nums, 4)<<endl;
    return 0;
}
