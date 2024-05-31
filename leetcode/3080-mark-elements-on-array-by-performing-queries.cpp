/**
 * Created by leiyang on 2024/5/17 10:38
 */
#include <bits/stdc++.h>

using namespace std;


struct Compare {
    bool operator()(const pair<int, int>& lhs, const pair<int, int>& rhs) const {
        if(lhs.first==rhs.first)
            return lhs.second < rhs.second;
        return lhs.first<rhs.first;
    }
};

class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        // 将nums和它的索引存到有序set里面去，然后用一个map根据索引指向每一个值，然后用一个sum记录当前的和
        set<pair<int, int >, Compare> myset;
        unordered_map<int, set<pair<int, int>>::iterator > umap;
        long long sum = 0;
        for(auto x:nums){
            sum+=x;
        }

        vector<long long> ans(queries.size(), 0);

        for(int i = 0;i<nums.size();i++){
            auto item = myset.emplace(nums[i], i); // 先值后索引
            umap[i] = item.first;
        }

        for(int i = 0;i<queries.size();i++){
            auto item = queries[i];
            // 首先查看第一个下标是否被标记，用umap就可以
            if(umap.count(item[0])){
                // 存在，标记它，从set和map中删除它，和减去它
                sum-=umap[item[0]]->first;
                myset.erase(umap[item[0]]);
                umap.erase(item[0]);
            }
            // 然后找item[1]个最小的值标记删除，如果已经少于这个数了，就直接全部删掉
            if(myset.size()<=item[1]){
                myset.clear();
                umap.clear();
                sum= 0;
                return ans;
            }
            else{
                for(int i = 0;i<item[1];i++){
                    // 删除这些值
                    auto min_val = myset.begin();
                    sum-=min_val->first;
                    umap.erase(min_val->second);
                    myset.erase(myset.begin());
                }
            }
            ans[i] = sum;

        }
        return ans;
    }
};

int main() {
    vector<int>v(100000,100000);
    vector<vector<int>> vv{{1,2}, {2,2}};
    Solution s;
    s.unmarkedSumArray(v, vv);
    return 0;
}
