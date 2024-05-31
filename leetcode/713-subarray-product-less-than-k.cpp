/**
 * Created by leiyang on 2024/4/13 18:33
 */
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int ans = 0;
        int prob = 1;
        int j = 0;
        for(int i = 0;i<nums.size();i++){
            // 外层一个for循环
            prob *= nums[i];
            // 里面一个while直到满足条件
            while(prob>=k){
                prob /= nums[j];
                j++;
            }
            ans += i-j+1;
        }
        return ans;


    }
};
int main() {


    return 0;
}
