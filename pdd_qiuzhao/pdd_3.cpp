/**
 * Created by leiyang on 2024/9/22 10:06
 */
#include <bits/stdc++.h>

using namespace std;
const int N = 2e5+5;
int n;
int a[15];
unordered_map<int, int> mp;

int check(){
    if(a[1] == 0) return 1;
    for(int i = 2;i<=n;i++){
        if(a[i] == a[i-1]) return 1;
    }
    for(auto x:mp){
        int y = -x.first;
        if(mp[y]) return 1;
    }
    for(int i = 1;i<=n;i++){
        int b[15];
        int cnt = 0;
        for(int j = 1;j<=n;j++){
            if(j!=i) b[++cnt] = a[j];
        }
        for(int j = 1;j<=cnt;j++){
            for(int k = j+1;k<=cnt;k++){
                if(b[j]+b[k] == a[i] || b[j]+b[k]==-a[i]) return 1;
            }
        }
    }
    return 0;
}

void solve(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a+1,a+1+n);
    if(check()) cout<<"yes" <<endl;
    else  cout<<"no"<<endl;
//    for(int i = 1;i<=n;i++) a[i] = 1e9;
    mp.clear();
}

int main() {
    int T;
    cin>>T;
    while(T--)solve();
    return 0;
}
