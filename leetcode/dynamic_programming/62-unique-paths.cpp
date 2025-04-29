/**
 * Created by leiyang on 2024/3/13 18:45
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int> > dp(m+5, vector<int>(n+5, 1));
        // int dp[105][105] = {1};
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};

int main(){
    return 0;
}
