/**
 * Created by leiyang on 2024/3/13 10:20
 */
#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int v[N], w[N];
int n, m;
int mem[N][N];

int dfs(int x, int spV) {
    if (mem[x][spV]) return mem[x][spV];
    int sum = 0;
    if (x>n) return 0;
    if (spV < v[x]) sum = dfs(x+1, spV);
    else sum = max(dfs(x+1, spV), dfs(x+1, spV-v[x]) + w[x]);
    mem[x][spV] = sum;
    return sum;
}


int main(){
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d %d", &v[i], &w[i]);
    }
    int res = dfs(1, m);
    cout<<res<<endl;
    return 0;
}
