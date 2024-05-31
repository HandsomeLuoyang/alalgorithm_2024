/**
 * Created by leiyang on 2024/3/13 18:45
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[101][101];
        for (int i = 0; i < 101; ++i) {
            dp[0][i] = 1;
            dp[i][0] = 1;
        }
        for (int i = 1; i < m; ++i) {
            for(int j = 1;j<n;++j) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};

int main(){
    return 0;
}
