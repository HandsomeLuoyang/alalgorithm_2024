/**
 * Created by leiyang on 2025/3/9 10:42
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin>>n>>m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    // 不能读完的情况
    if (m*2<n) {
        cout<<-1<<endl;
        exit(0);
    }

    // 能读完的情况
    // 构造dp数组
    vector<vector<double> > dp(n+5, vector<double> (n+5, 0));
    dp[1][1] = v[0];
    dp[2][1] = (double)(v[0]+v[1])/2;
    dp[2][2] = v[0]+v[1];
    for (int i = 3;i<n+1;i++) {
        int j;
        if (i%2 == 0) {
            j = i/2;
        }
        else j = (i/2)+1;
        for (;j<=i;j++) {
            if (j*2 == i) {
                // 只能从dp[i-2][j-1]转变而来
                dp[i][j] = dp[i-2][j-1] + (double)(v[i-1]+v[i-2])/2;
                continue;
            }
            if (i == j) {
                // 只能从dp[i-1][j-1]转变而来
                dp[i][j] = dp[i-1][j-1] + v[i-1];
                continue;
            }
            dp[i][j] = max(dp[i-1][j-1]+v[i-1], dp[i-2][j-1]+(double)(v[i-1]+v[i-2])/2);
        }
    }
    double ans = 0;
    for (int j=0;j<=m;j++) {
        ans = max(dp[n][j], ans);
    }
    cout<<ans<<endl;


    return 0;
}
