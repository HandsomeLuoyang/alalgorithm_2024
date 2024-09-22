/**
 * Created by leiyang on 2024/9/22 10:06
 */
#include <bits/stdc++.h>

using namespace std;

const int N = 1005;

bool check(string s){
    int n = s.size();
    for(int i=0;i<n-2;i++){
        if (s[i]=='P' && s[i+1]=='D' &&s[i+2]=='D') return 1;
    }
    return 0;
}

struct node{
    string s;
    bool operator < (const node &p){
        int n = s.size();
        int m = p.s.size();

        int flag = check(s);
        int flag1 = check(p.s);

        if(flag &&! flag1) return true;
        else if(!flag &&flag1) return false;
        else return s<p.s;
    }
}a[N];

void solve(){
    int m, n;
    cin>>n>>m;
    for(int i = 1;i<=n;i++){
        cin>>a[i].s;
    }
    sort(a+1, a+1+n);
    for(int i = 1;i<=m;i++) cout<<a[i].s<<endl;
}

int main() {
    solve();

    return 0;
}
