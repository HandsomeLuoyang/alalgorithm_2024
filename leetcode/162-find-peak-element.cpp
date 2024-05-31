/**
 * Created by leiyang on 2024/4/14 23:29
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size()==1) return 0;
        int left = 0, right=nums.size()-2;
        // 思路应该是二分查找，找到一个值看其左右，如果已经是峰就返回，不是的话就往大的那一边找
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]<nums[mid+1]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return left;
    }
};

int main() {


    return 0;
}
