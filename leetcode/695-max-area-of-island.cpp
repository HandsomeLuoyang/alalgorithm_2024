/**
 * Created by leiyang on 2024/3/25 21:15
 */
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int result = 0;
    int temp = 0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0;i<m;i++)
            for(int j = 0;j<n;j++) {
                if(grid[i][j] == 1) {
                    temp = 0;
                    dfs(i, j, grid, temp);
                }

            }
        return result;
    }

    bool out(int i, int j, vector<vector<int> > & grid) {
        int m = grid.size();
        int n = grid[0].size();
        // 越界判定
        return (i<0||i>=m || j<0 || j>= n);
    }

    void dfs(int i, int j, vector<vector<int> > & grid, int& area) {
        if ((out(i, j, grid)) || grid[i][j] != 1) return; // dfs边界，如果越界或者为海洋或者已经访问过，就不用访问了
        area ++;
        grid[i][j] =2;
        result = max(result, area);
        cout<<i<<" "<<j<<" "<<area<<endl;
        dfs(i-1, j, grid, area);
        dfs(i+1, j, grid, area);
        dfs(i, j-1, grid, area);
        dfs(i, j+1, grid, area);
    }
};

int main(){
    
    
    return 0;
}
