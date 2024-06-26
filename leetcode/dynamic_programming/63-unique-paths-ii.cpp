/**
 * Created by leiyang on 2024/3/13 18:57
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        int dp[101][101];
        int flag = 0;
        for (int i = 0; i < m; ++i) {
            if (obstacleGrid[i][0] == 1) flag = 1;
            if (flag) {
                dp[i][0] = 0;
            }
            else dp[i][0] = 1;
        }
        flag = 0;
        for (int i = 0; i < n; ++i) {
            if (obstacleGrid[0][i] == 1) flag = 1;
            if (flag) {
                dp[0][i] = 0;
            }
            else dp[0][i] = 1;
        }

        for (int i = 1; i < m; ++i) {
            for(int j = 1; j < n; ++j) {
                if (obstacleGrid[i][j] == 1) dp[i][j] = 0;
                else dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};

int main(){

    return 0;
}
