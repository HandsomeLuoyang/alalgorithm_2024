/**
 * Created by leiyang on 2024/10/12 10:04
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> strings(n, "");
    for(int i = 0;i<n;i++){
        cin>>strings[i];
    }
    string max_pre = strings[0];
    cout<<max_pre<<endl;

    for(int _ = 1;_<n;_++){
        string new_max_pre;
        int i = 0;
        for(;i<max_pre.size();i++){
            // 前缀与当前字符串比较
            if(max_pre[i] == strings[_][i]){
                new_max_pre += max_pre[i];
            }
            else{ //找到不同的字符了
                if (new_max_pre.empty()){
                    cout<<"-1"<<endl;
                }
                else cout<<new_max_pre<<endl;
                max_pre = new_max_pre;
                break;
            }
            if(i == max_pre.length()-1) {// 前缀全部符合
                cout<<max_pre<<endl;
            }
        }

    }

    return 0;
}
