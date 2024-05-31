/**
 * Created by leiyang on 2024/4/13 20:15
 */
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main() {
    ll n, m;
    // 感觉是线段树
    cin>>n>>m;
    int v, u;
    vector<vector<int> >nums(m, vector<int> (2, 0));
    for(int i = 0;i<m;i++){
        cin>>v>>u; // 有v个u，u在[1,10]中
        nums[i][0] = v;
        nums[i][1] = u;
    }
    int q;//询问次数
    cin>>q;
    int l, r;
    int prod;
    for(int _ = 0;_<q;_++){
        cin>>l>>r; // l和r都是从1开始

        // 先算乘积
        int sum=0, num_l, num_r, flag_l=0;
        for(int i = 0;i<nums.size();i++) {
            sum += nums[i][0];
            if (sum >= l && !flag_l) {
                num_l = i;
                flag_l = 1;
            }
            if (sum >= r) {
                num_r = i;
                break;
            }
        }

    }
    return 0;
}
