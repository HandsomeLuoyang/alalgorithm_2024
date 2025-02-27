/**
 * Created by leiyang on 2024/10/12 11:01
 */
#include <bits/stdc++.h>

using namespace std;

const int N = 3e5+5;

int n;
int a[N];
int ql, qr;

int solve(){
    cin>>n>>ql>>qr;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
    int l = ql, r = qr;
    for(int i = 2;i<=n;i++){
        if(a[i] == a[i-1]) return 0;
        if(a[i] > a[i-1]) l = a[i-1] +1;
        else r = a[i-1] -1;
        if (l>=r) return 0;
    }
    return r-l;
}

int main() {
    cout<<solve();
    return 0;
}
