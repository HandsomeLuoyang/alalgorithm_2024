//
// Created by yannicklei on 2024/9/10.
//
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> nums) {
    for (auto item: nums) {
        cout<<item<<" ";
    }
}

void quick_sort(vector<int>& nums, int l, int r) {
    if (l>=r) return ;
    int c_val = nums[(l+r)>>1];
    int i = l, j = r;
    while(i<=j) {
        while(nums[i]<c_val) i++;
        while(nums[j]>c_val) j--;
        if (i<=j) {
            swap(nums[i], nums[j]);
            i++;j--;
        }
    }
    quick_sort(nums, l, j);
    quick_sort(nums, i, r);
}


int main() {
    vector<int> nums = {4,3,5,79,0,12,5,6,71};
    quick_sort(nums, 0, nums.size()-1);
    print(nums);
}