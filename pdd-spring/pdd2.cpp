/**
* Created by leiyang on 2025/3/9 10:01
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<ll> pre_sum(n+1);
    for (int i = 0;i<n;i++) {
        cin>>v[i];
    }
    // 前缀和
    pre_sum[0] = 0;
    for (int i = 0;i<n;i++) {
        pre_sum[i+1] = pre_sum[i] + v[i];
    }
    ll ans = 0;
    // 暴力一下
    for (int i = 0;i<n;i++) {
        ll temp = -pre_sum[i];
        for (int j = i;j<n;j++) {
            temp += v[j];
            ans = max(ans, abs(temp));
        }
    }
    printf("%lld", ans);

    return 0;
}
