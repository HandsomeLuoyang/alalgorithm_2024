/**
 * Created by leiyang on 2024/3/17 15:26
 */
#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int result=0;
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0;i<m;i++)
            for(int j = 0;j<n;j++) {
                if(grid[i][j] == '1') {
                    result += 1;
                    dfs(i, j, grid);
                }
            }
        return result;


    }

    void dfs(int i, int j, vector<vector<char>>& grid) {
        if(out(i, j, grid) || grid[i][j]!='1') {
            return ;
        }
        grid[i][j] = '2';
        dfs(i-1, j, grid);
        dfs(i+1, j, grid);
        dfs(i, j-1, grid);
        dfs(i, j+1, grid);
    }

    bool out(int i, int j, vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        return (i<0||i>=m||j<0||j>=n);

    }


};


int main(){
    
    
    return 0;
}
