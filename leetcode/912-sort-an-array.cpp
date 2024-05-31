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

    void helper(vector<int> &q, int l , int r) {
        if(l>=r) return ;
        int x = q[(l+r)>>1];
        int i = l-1, j = r+1;
        while(i<j) {
            do i++;while(q[i]<x);
            do j--;while(q[j]>x);
            if (i<j) swap(q[i], q[j]);
        }
        helper(q, l, j);
        helper(q, j+1, r);
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
