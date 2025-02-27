/**
 * Created by leiyang on 2024/10/12 11:06
 */
#include <bits/stdc++.h>
using namespace std;

const int N = 3e2+5;
int n, m;
string s[N];
int vis[N];

int check(int x, int y){
    if (x<0||x>=n||y<0||y>=m||s[x][y] == '#') return 0;
    return 1;
}
int ans = 1e9;

void dfs(int x, int y, int z){
    if(x==n-1 &&y==m-1){
        ans = min(ans, z);
        return ;
    }
    for(int i =1;i<=14;i++){
        int nx = x +i;
        int ny = y;
        if(check(nx, ny) && (i==1 || !vis[i])){
            vis[i] =1;
            dfs(nx, ny, z+1);
            vis[i] = 0;
        }
        nx = x;
        ny = y+i;
        if(check(nx, ny) && (i==1 || !vis[i])){
            vis[i] = 1;
            dfs(nx, ny, z+1);
            vis[i] = 0;
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        cin>>s[i];
    }
    dfs(0,0,0);
    if (ans == 1e9) ans = -1;
    cout<<ans<<endl;

}


int main() {
    solve();
    return 0;
}
