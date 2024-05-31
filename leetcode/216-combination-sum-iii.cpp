/**
 * Created by leiyang on 2024/5/24 14:06
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    vector<vector<int>> combinationSum3(int k, int n) {
        dfs(k, n, 1);
        return ans;
    }

    void dfs(int k, int n, int i){
        int _sum = accumulate(path.begin(), path.end(), 0);
        int length = path.size();
        if(_sum>n||length>k || 10-i<k-length) return; // 从1到9进行搜索的，因此如果当前已经太大了就没必要搜索了

        if(length==k && _sum == n)
        {
            ans.push_back(path);
            return ;
        }
        for(int j = i;j<=9;j++){
            path.push_back(j);
            dfs(k, n, j+1);
            path.pop_back();
        }

    }
};


int main() {


    return 0;
}
