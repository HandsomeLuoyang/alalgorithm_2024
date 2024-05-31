/**
 * Created by leiyang on 2024/3/29 15:57
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // 从右往左找，找到从右往左第一次非递增的两个值，互换
        int n = nums.size();
        if (n == 1) return ;
        int j = n-1, i = n-2;
        int l=0, r=0;
        while (i >= 0 ) {
            if(nums[i]>=nums[j]) {
                i--;
                j--;
            }
            else {
                // 出现了逆序，j从i往后找，找到逆序的最早发生位置
                l = i;
                for(int k = j;k<n;k++) {
                    if (nums[l]<nums[k]) {
                        r=k;
                    }
                }
                break;
            }
        }
        if(l!=r) {
            swap(nums[l], nums[r]);
            sort(nums.begin()+l+1, nums.end());
            return;
        }
        sort(nums.begin(), nums.end());
    }
};


int main(){
    
    
    return 0;
}
