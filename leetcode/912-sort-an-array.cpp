/**
 * Created by leiyang on 2024/3/13 20:27
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        helper(nums, 0, nums.size()-1);
        return nums;
    }

    void helper(vector<int>& nums, int l, int r) {
        if(l>=r) return ;
        int pivot = nums[(l+r)>>1];
        int i=l, j = r;
        while(i<=j) {
            while (nums[i]<pivot) i++;
            while(nums[j]>pivot) j--;
            if(i<=j) {
                swap(nums[i], nums[j]);
                i++;j--;
            }
        }
        helper(nums, l, j);
        helper(nums, i, r);
    }
};


int main(){
    Solution s;
    vector<int> nums = {4,6,1,2,7};
    vector<int> ans = s.sortArray(nums);
    for (int an : ans) {
        cout<<an<<" ";
    }
    return 0;
}
