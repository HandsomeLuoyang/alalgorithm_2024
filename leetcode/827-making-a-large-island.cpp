/**
 * Created by leiyang on 2024/3/25 21:48
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<int, int> umap;
    int area = 0;
    int result = 0;
    int largestIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int idx = 2; // 从2号岛屿开始记录
        umap[0] = 0; // 海洋的面积是0
        // 第一次遍历记录各个岛屿
        for(int i = 0;i<m;i++)
            for(int j = 0;j<n;j++) {
                if (grid[i][j] == 1) {
                    area = 0;
                    first_dfs(i, j, grid, area, idx);
                    int temp = area;
                    result = max(result, temp);
                    umap[idx] = temp;
                    idx+=1;
                }
            }

        // cout<<"second"<<endl;
        // 第二遍从海洋遍历，每次扩充四个点，探索它能连接的岛屿的最大值
        for(int i = 0;i<m;i++)
            for(int j = 0;j<n;j++) {
                if (grid[i][j] == 0) {
                    // 获得这个位置的四个位置的岛屿序号
                    int direct[4] = {0};
                    unordered_set<int> uset;
                    int temp = 1;
                    // int idx_l = 0, idx_r = 0, idx_u = 0, idx_d = 0;
                    if(i-1>=0) direct[0] = grid[i-1][j];
                    if(i+1<m) direct[1] = grid[i+1][j];
                    if(j-1>=0) direct[2]  = grid[i][j-1];
                    if(j+1<n) direct[3] = grid[i][j+1];
                    for(int p=0;p<4;p++) {
                        if (direct[p] == 0 || !uset.count(direct[p])) {
                            temp += umap[direct[p]];
                            uset.insert(direct[p]);
                        }
                    }
                    result = max(result, temp);
                }
            }
        return result;
    }

    void first_dfs(int i, int j, vector<vector<int>>& grid, int& area, int idx) {
        if (out(i, j, grid) || grid[i][j] != 1) return ;
        area++;
        grid[i][j] = idx;
        // cout<<i<<" "<<j<<" "<<area<<" "<<idx<<endl;
        first_dfs(i-1, j, grid, area, idx);
        first_dfs(i+1, j, grid, area, idx);
        first_dfs(i, j-1, grid, area, idx);
        first_dfs(i, j+1, grid, area, idx);
    }

    bool out(int i, int j, vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        return (i<0||i>=m||j<0||j>=n);
    }
};


int main(){
    
    
    return 0;
}
