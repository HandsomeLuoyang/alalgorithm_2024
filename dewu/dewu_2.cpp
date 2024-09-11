/**
 * Created by leiyang on 2024/8/28 19:14
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin>>n>>m;
    // 找到三个数之和为m，范围为[0,n]区间内，三个数可以重复，那就找到不重复的的乘以3就可以
    // 存在一种特殊情况就是x=y=z，单独判断，这里保证i,j可以相同，k不能与i，j相同，这样就都是可以乘三的
    // 二重循环
    unsigned long long ans = 0;
    for(int i = 0;i<n;i++)
        for(int j=i;j<n;j++){
            int need = m-i-j;
            if(need>=j&&need<=n){
                cout<<i<<" "<<j<<" "<<need<<endl;
                if (i==j&&j==need) ans+=1;
                else ans += 3;
            }
        }
    cout<<ans<<endl;
    return 0;
}
