/**
 * Created by leiyang on 2024/10/12 11:18
 */
#include <bits/stdc++.h>

using namespace std;

const int N = 3e5+5;
int n;
string s[N];

void solve(){
    cin>>n;
    int cnt = 1;
    cin>>s[1];
    int sz = s[1].size();
    int flag = 0;
    for(int i =2;i<=n;i++){
        string t;
        cin>>t;
        if(flag) continue;
        int sz1 = t.size();
        int res = -1;
        for(int i = 0;i<min(sz, sz1);i++){
            if(s[cnt][i] != t[i]){
                res = i;
                break;
            }
        }
        if (res == 0) flag =1;
        else s[++cnt] = t.substr(0, res);
    }

    for(int i =1;i<=cnt;i++){
        cout<<s[i]<<endl;
    }
    for(int i = cnt+1;i<=n;i++) cout<<-1<<endl;
}


int main() {
    solve();

    return 0;
}
