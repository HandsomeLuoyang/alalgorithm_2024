/**
 * Created by leiyang on 2025/3/9 10:01
 */
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0;i<n;i++) {
        cin>>v[i];
    }
    ull ans = 0;
    for (int i = 0;i<n;i++) {
        ans += abs(v[i]);
    }
    printf("%lld", ans);


    return 0;
}
