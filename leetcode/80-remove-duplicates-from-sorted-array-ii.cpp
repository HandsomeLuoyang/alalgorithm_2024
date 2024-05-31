/**
 * Created by leiyang on 2024/3/20 10:16
 */
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()<3) return nums.size();
        int i = 0, j = 1;
        while (j<nums.size()) {
            cout<<i<<" "<<j<<endl;
            while (j<nums.size()&& nums[i]!=nums[j]) {
                i++;
                j++;
            }
            if(j==nums.size()) return j;
            while(j+1<nums.size() && nums[j+1] == nums[i]) {
                nums.erase(nums.begin()+j+1);
            }
            i++;
            j++;
            cout<<i<<" "<<j<<endl;
        }
        return nums.size();
    }
};

int main(){
    vector<int> nums= {1,1,2};
    Solution s;
    cout<<s.removeDuplicates(nums);
    return 0;
}
