/**
 * Created by leiyang on 2024/6/2 16:22
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
unordered_map<ll, ll> mp;

int main() {
    ll n, m;
    cin >> n >> m;
    ll cur_length = n;
    ll cur_val = 1;
    ll special_val = 1; // 每一行只会有一个特殊值，若没有就为0
    int flag = n%2; // 0表示所有的值相同，1表示存在额外值
    // 需要知道m的个数
    while(true){
        if(flag == 0)
            mp[cur_val] += cur_length;
        else if(flag == 1){
            mp[cur_val] += cur_length-1;
            mp[special_val] += 1;
        }
        // 判断下一层
        if(cur_length%2 == 0){
            cur_val*=2;
            special_val = cur_val;
            cur_length>>=1;
            flag = 0;
        }
        else{
            // 没有特殊值，直接到下一层
            // 有特殊值，判断是多出1个还是3个,1个不用动
            if(cur_length%4 == 3){
                special_val = 2*cur_val + special_val;
                cur_length>>=1;
            }
            else if(cur_length%4 == 1){
                cur_length>>=1;
                if(cur_length<=0)
                    break;
                cur_length += 1;
            }
            cur_val *= 2;
            flag = 1;

        }
        if(cur_length<=0){
            break;
        }
    }
    while(m--)
    {
        ll tmp;
        cin>>tmp;
        cout<<mp[tmp]<<endl;
    }

    return 0;
}
