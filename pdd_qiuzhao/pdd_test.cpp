#define IO std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define bug(x) cout<<#x<<" is "<<x<<endl
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 2e5 + 5;
int n;
int a[15];
unordered_map<int, int> mp;
int check(){
    
    // for(int i = 2; i <= n; i++){
    //     if(a[i] == a[i - 1]) return 1;
    // }
    for(auto x : mp){
        int y = -(x.first);
        //bug(y);
        bug(x.first);
        // bug(mp[y]);
        if(mp[y]) return 2;
    }
    // for(int i = 1; i <= n; i++){
    //     int b[15];
    //     int cnt = 0;
    //     for(int j = 1; j <= n; j++){
    //         if(j != i) b[++cnt] = a[j];//¸Ä
    //     }
    //     for(int j = 1; j <= cnt; j++){
    //         for(int k = j + 1; k <= cnt; k++){
                
    //             if(b[j] + b[k] == a[i] || b[j] + b[k] == -a[i]
    //             || -b[j] + b[k] == a[i] || b[j] - b[k] == a[i]) {//
    //                 return 3;
    //             }
    //         }
    //     }
    // }
    return 0;
}
void solve(){
    cin >> n;
    for(int i = 1; i <= n ; i++) {
        cin >> a[i];
        mp[a[i]]++;
        bug(a[i]);
        bug(mp[a[i]]);
    }
    sort(a + 1, a + 1 + n);
    bug(check());
    // if(check()) cout << "yes" << endl;
    // else cout << "no" << endl;
    mp.clear();
}
int main(){
    //IO;
    int T;
    cin >> T;
    while(T--) solve();
}
/*
10
4
-7 -5 4 8
4
-1 -3 4 7
2
1 -1
3
1 2 3
4
1 2 3 4
3
-81 42 29


*/