/**
 * Created by leiyang on 2024/10/12 16:58
 */
#include <bits/stdc++.h>

using namespace std;

const int N = 3e2+5;

int n, q;
list<int> st;
map<int, list<int>::iterator > mp;

void solve(){
    cin >>n >>q;
    for(int i = 1;i<=n;i++){
        auto it = st.insert(st.end(), i);
        auto nxt = next(it);
        mp[i] = it;
    }
    for(auto x : st){
        auto it = mp[x];
        cout<<*(next(it))<<" ";
    }
//    for(int i = 1;i<=q;i++){
//        int x, y, op;
//        cin>>x>>y>>op;
//        auto itx = mp[x];
//        auto ity = mp[y];
//        if (op==0) st.splice(ity, st, itx);
//        else{
//            ity++;
//            st.splice(ity, st, itx);
//        }
//    }
//    for(auto x:st) cout<<x<<" ";
}

int main() {
    solve();
}
