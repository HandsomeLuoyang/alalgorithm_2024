#include<bits/stdc++.h>
using namespace std;
int t,n;
const int N = 1e6 +  5;
const int INF = 0x3f3f3f3f;
long long dp[2][N];
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        if (n <= 3) cout << 0 << endl;
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;
        dp[1][0] = 1;
        for (int j = 1; j <= 2 * n - 1; j++) {
            //保证初始带钱的方案不符合要求
            dp[0][j] = -INF;
            dp[1][j] = -INF;
        }
        for (int i = 2; i <= n; i++) {
            //不同的人数
            //每个位置选择的数目可以二进制拆分成为logn
            for (int j = 0; j <= 2 * n - 1; j++)
                //不同的金币价格
        }
        //初始化对应的情况
        for (int i = )
    }
    return 0;
}