/**
 * Created by leiyang on 2024/3/30 14:29
 */
#include <bits/stdc++.h>
using namespace std;

int result = INT_MAX;

void dfs(int char_count, int v_count, int steps, int m) {
    if(char_count == m) {
        // 终止条件
        result = min(result, steps);
        return ;
    }
    // 如果当前的方法已经大于result了，就不用继续了
    if(steps>result) return;

    // 开始进行选路
    // 第一条路，直接scv，让字符+1，这里可以剪值
    // 如果剩余的字符<=v_count的话，才用单个
    if(m-char_count <= v_count){
        dfs(char_count+1, 1, steps+3, m);
    }

    // 第二条路，直接v,字符+v_count，可以剪枝
    dfs(char_count+v_count, v_count, steps+1, m);

    // 第三条路，进行acv，让值翻倍
    // 如果翻倍之后的值大于m了，就不用acv
    if(2*char_count<=m) {
        dfs(char_count*2, 2*v_count, steps+3, m);
    }
}

int main(){
    int T, m;
    cin>>T;
    while(T--) {
        cin>>m;
        // 当前有一个字符a，如何快速的达到m个字符，通过cv操作
        if(m==1) {
            cout<<0<<endl;
        }
        if( m < 8 ) {
            cout<<m+1<<endl;
            continue;
        }

        // 排除了特殊情况之后，那么必定首先需要acv一次，粘贴板中有1一个值，已经按下3次，剩余m-2个需要补充的字符
        int start_steps=3;
        int v_count = 1;
        int char_count = 2;
        // 可以使用dfs
        dfs(char_count, v_count, start_steps, m);

        cout<<result<<endl;
    }
    return 0;
}
