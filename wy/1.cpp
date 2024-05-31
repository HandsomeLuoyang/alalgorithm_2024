/**
 * Created by leiyang on 2024/3/30 14:01
 */
#include <bits/stdc++.h>
using namespace std;
int p[10001] = {0};

int main() {
    int N;
    cin>>N;
    for(int i = 1;i<=N;i++) {
        cin>>p[i];
    }

    int result[21] = {0};
    for(int i = 1;i<=N;i++){
        for(int j = 0;j<=p[i];j++) {
            result[j] += 1; // 假设所有人之前都没有领过，那么需要多少个周年积木
        }
    }

    for(int i = 1;i<=N;i++) {
        // 删掉每个人前年和今年可能领过的周年积木
        for(int j = p[i]-2;j>=0&&j<p[i];j++) {
            result[j] -= 1;
        }
    }
    cout<<result[1]<<" "<<result[3]<<" "<<result[6]<<" "<<result[10]<<endl;




    // for(int i = 0;i<N;i++) {
    //     cout<<p[i];
    // }
    return 0;
}
