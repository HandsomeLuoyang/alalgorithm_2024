/**
 * Created by leiyang on 2024/3/26 16:35
 */
#include <bits/stdc++.h>
using namespace std;




class Solution {
public:
    int result = 0;
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0;i<m;i++)
            for(int j = 0;j<n;j++) {
                if(grid[i][j]==1) {
                    dfs(i, j, grid);
                }
            }
        return result;
    }

    void dfs(int i, int j, vector<vector<int>> &grid) {
        if (out(i, j, grid) || grid[i][j]!=1) {
            if (out(i, j, grid) || grid[i][j] == 0) result+=1;
            return ;
        }
        grid[i][j] = 2; // 已经访问过
        dfs(i-1, j, grid);
        dfs(i+1, j, grid);
        dfs(i, j-1, grid);
        dfs(i, j+1, grid);
    }

    bool out(int i, int j, vector<vector<int>> &grid) {
        int m = grid.size();
        int n = grid[0].size();
        return (i<0||i>=m||j<0||j>=n);
    }


};

int main(){
    vector<int> aa = {1,2,3,4,6};
    for_each(aa.begin(), aa.end(), [](int val){cout<<val<<" ";});
    return 0;
}
