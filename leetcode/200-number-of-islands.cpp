/**
 * Created by leiyang on 2024/3/17 15:26
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ans=0;
    int numIslands(vector<vector<char>>& grid) {
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if(grid[i][j] != '1') continue;
                dfs(grid, i, j);
                ans += 1;
            }
        }
        return ans;
    }

    void dfs(vector<vector<char>>& grid, int i, int j) {
        if(i<0||i>=grid.size() || j<0||j>=grid[0].size() || grid[i][j] != '1') return ;
        grid[i][j] = '2';
        dfs(grid, i-1, j);
        dfs(grid, i+1, j);
        dfs(grid, i, j-1);
        dfs(grid,i, j+1);
    }
};




int main(){
    
    
    return 0;
}
