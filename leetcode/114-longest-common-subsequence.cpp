/**
 * Created by leiyang on 2025/2/27 15:43
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int ans = 0;
        vector<vector<int>> dp(text1.size()+1, vector<int>(text2.size()+1, 0));
        for (int i = 0; i < text1.size(); ++i) {
            for (int j = 0; j < text2.size(); ++j) {
                if (text1[i] == text2[j]) {
                    dp[i+1][j+1] = 1 + dp[i][j];
                    ans = max(ans, dp[i+1][j+1]);
                }
                else {
                    dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
                }
            }
        }
        return ans;
    }
};

int main(){
    
    
    return 0;
}
