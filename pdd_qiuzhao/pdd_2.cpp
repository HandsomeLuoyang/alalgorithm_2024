/**
 * Created by leiyang on 2024/9/22 10:06
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 2e5+5;
double a[N];
pair<double, int>p;
map<double, ll> mp;

void solve(){
    int n;
    cin>>n;
    double sum = 0;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
        sum+=a[i];
    }
    double res = 2 * sum / n;
    ll ans1 = 0;
    ll ans2 = 0;
    for (auto x:mp){
        double y = res - x.first;
        if (y!=x.first){
            ans1 += mp[y] * mp[x.first];
        }
        else{
            ans2 += mp[x.first] * (mp[x.first]-1) /2;
        }
    }
    cout<<ans1/2 + ans2<<endl;
    mp.clear();
}

int main() {
    int T;
    cin>>T;
    while (T--){
        solve();
    }

    return 0;
}
