/**
 * Created by leiyang on 2024/10/12 18:59
 */
#include <bits/stdc++.h>

using namespace std;

// 先暴力

bool is_prime(int x){
    if (x==1) return false;
    for (int i = 2;i<x/2;i++){
        if (x%i==0) return false;
    }
    return true;
}

set<int> mei_zhi;
set<int> tuan_zhi;
set<int> vis;

bool compare(const int &x, const int &y){
    int flag = mei_zhi.count(x) + mei_zhi.count(y);
//    cout<<x<<" "<<y<<" "<<flag<<" "<<endl;
    if (flag == 0 || flag == 2) return x>y;
    else{
        if(mei_zhi.count(x)) return true;
        return false;
    }
}

/*
5 4
5 7 12 1 1
2 6 11 2
 */

int main() {
    int n, m;
    cin>>n>>m;
    vector<int> mei(n, 0);
    vector<int> tuan(m, 0);

    vector<int> ans_vec(n, -1);

    // 输入并记录两个宠物列表中哪些是质数
    for(int i = 0;i<n;i++){
        cin>>mei[i];
        if(is_prime(mei[i])) mei_zhi.insert(mei[i]);
    }
    for(int i = 0;i<m;i++){
        cin>>tuan[i];
        if(is_prime(tuan[i])) tuan_zhi.insert(tuan[i]);
    }
    sort(mei.begin(), mei.end(), compare);

    // 暴力贪心
    // 但是需要先排序，mei中质数且数值大的应该先进行挑选
    long long ans = 0;
    for(int i = 0;i<n;i++){
        int temp=0;
        int max_j = -2;
        for(int j = 0;j<m;j++){
            if (vis.count(j)) continue;
            int flag = mei_zhi.count(mei[i]) + tuan_zhi.count(tuan[j]);
            if(flag == 2){
                if (temp < max(temp, 2*(mei[i]+tuan[j]))){
                    temp = max(temp, 2*(mei[i]+tuan[j]));
                    max_j = j;
                }
            }
            else if(flag == 1){
                if (temp < max(temp, 2*max(mei[i], tuan[j]))){
                    temp = max(temp, 2*max(mei[i], tuan[j]));
                    max_j = j;
                }
            }
            else {
                if (temp < max(temp, mei[i] + tuan[j])) {
                    temp = max(temp, mei[i] + tuan[j]);
                    max_j = j;
                }
            }
        }
        ans_vec[i] = max_j+1;
        vis.insert(max_j);
        ans+=temp;
    }
    cout<<ans<<endl;
    for(int i = 0;i<n;i++){
        cout<<ans_vec[i]<<" ";
    }

    return 0;
}
