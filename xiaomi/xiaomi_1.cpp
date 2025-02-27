/**
 * Created by leiyang on 2024/10/12 16:02
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll N =3e5+5;
ll a[N];

void solve(){
    ll n;
    cin>>n;
    ll sum = 0;
    ll flag = 0; // 负值的个数
    ll abs_min= LONG_LONG_MAX;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
        if(a[i]<0) flag += 1;
        sum+=abs(a[i]);
        abs_min = min(abs_min, abs(a[i]));
    }
    // 如果负值的个数为偶数，直接输出和，因为无限次的操作必然能把偶数个负数全部变为正数
    if (flag%2 == 0) cout<<sum<<endl;
    else{ // 否则就减去绝对值最小的那个值
        cout<< sum- 2*abs_min<<endl;
    }

}

/*
4
1 -1 -2 -4
 */


int main() {
    solve();
    return 0;
}
