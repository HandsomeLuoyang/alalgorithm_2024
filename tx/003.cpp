/**
 * Created by leiyang on 2024/3/30 20:51
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, m;
    cin>>n>>k;
    vector<int> a(n, 0);
    for(int i = 0;i<n;i++) {
        int temp;
        cin>>temp;
        a[i] = temp; // 输入成绩难度,a为非降序
    }
    cin >> m;// 考生数量

    vector<vector<int> > b(m, vector<int> {}); // b个学生
    for(int i = 0;i<m;i++) {
        int num;
        cin>>num;
        for(int j = 0;j<num;j++) {
            int temp;
            cin>>temp;
            b[i].push_back(temp-1);  // 每个学生过了b[i]个题目，b[i]中的题号代表顺序，因为输入从1开始，这里统一变成0
        }
    }

    // 两种情况，第一种，过的题的最大值与未过的题的最小值之差大于等于500
    // 第二种，k对相邻的题目难度之差大于等于500
    int result = 0;

    for(int i = 0;i<m;i++) {
        int timu_size = b[i].size();
        int _max = INT_MIN;
        vector<int> vis(n, 0);
        int dui = 0; // 记录相邻的难度绝对值超过500的对数
        int flag = 0; // 提前跳出

        for(int j = 0;j<timu_size;j++) {
            // 记录过了的题目的最大值
            _max = max(_max, a[b[i][j]]);
            vis[b[i][j]] = 1; // 这个题目做出来了
            if (j+1<timu_size) {
                if(abs(a[b[i][j]] - a[b[i][j+1]]) >= 500) {
                    dui += 1;
                    if (dui>=k) {
                        result+= 1;
                        // 跳出
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if(!flag) {
            // 如果不满足第二个条件，开始判定第一个条件
            for(int j = 0;j<n;j++) {
                if(!vis[j]) {
                    // 找到了没做的题的最小难度
                    if(_max - a[j] >= 500) {
                        result += 1;
                    }
                }
            }
        }
    }
    cout<<result<<endl;

    return 0;
}
