/**
 * Created by leiyang on 2024/4/13 18:52
 */
//#include <bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long ll;

int main() {
    int n, m;
    cin>>n>>m;
    vector<vector<int> > matrix(n, vector<int> (m, 0));
    int temp;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>temp;
            matrix[i][j] = temp;
        }
    }

    // 判断特例
    if (n<2||m<2) {
        cout<<0<<endl;
        return 0;
    }

    ll ans = 0;
    pair<int, int> lu(0, 0), ru(0, 1), ld(1, 0), rd(1, 1);
    while(true){
//        cout<<rd.first<<" "<<rd.second<<endl;
        if(matrix[lu.first][lu.second]==matrix[ru.first][ru.second]==matrix[ld.first][ld.second]==matrix[rd.first][rd.second]){
            ans+=1;
        }

        // 判断是否到达右下角
        if(rd.first == n-1 && rd.second == m-1) break;
        // 判断是否到达右边界
        if(rd.second == m-1){
            // 整体向下移动一格
            lu.first+=1;
            lu.second = 0;

            ru.first += 1;
            ru.second = 1;

            ld.first += 1;
            ld.second = 0;

            rd.first += 1;
            rd.second = 1;
        }
        else{
            // 整体向右移动
            lu.second++;
            ru.second++;
            ld.second++;
            rd.second++;
        }

    }
    printf("%lld", ans);

    return 0;
}
