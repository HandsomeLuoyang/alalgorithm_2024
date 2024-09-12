//
// Created by yannicklei on 2024/9/12.
//
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // ´ÓºóÍùÇ°
        int tail = m+n-1;
        m--;n--;
        while(m>=0 && n>=0) {
            if(nums2[n]>nums1[m]) nums1[tail--] = nums2[n--];
            else nums1[tail--] = nums1[m--];
        }
        while(m>=0) nums1[tail--] = nums1[m--];
        while(n>=0) nums1[tail--] = nums2[n--];
    }
};