/**
 * Created by leiyang on 2024/4/16 15:01
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int left = 0, right = nums.size()-2;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]<nums[nums.size()-1]){
                // 那么最小值肯定在其左侧
                right = mid-1;
            }
            else{
                // 大于的时候，肯定在其右侧
                left = mid+1;
            }
        }
        return nums[left];
    }
};

int main() {


    return 0;
}
