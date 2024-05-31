/**
 * Created by leiyang on 2024/5/24 13:53
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<vector<int>> combine(int n, int k) {
        dfs(n, k , 1);
        return ans;
    }

    void dfs(int n, int k, int i){
        if(path.size() == k){
            ans.push_back(path);
            return ;
        }
        if(n-i+1<k-path.size()) return;
        for(int j = i;j<=n;j++){
            path.push_back(j);
            dfs(n, k, j+1);
            path.pop_back();
        }
    }
};

int main() {


    return 0;
}
