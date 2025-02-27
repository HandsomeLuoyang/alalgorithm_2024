/**
 * Created by leiyang on 2024/10/29 19:28
 */
#include <bits/stdc++.h>

using namespace std;

bool is_match(string base, string cur){
    int i = 0, j = 0;
    while(i<base.size()&&j<cur.size()){
        if(cur[j] == base[i]){
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    if(i == base.size()) return true;
    return false;
}

int main() {
    string base_str;
    cin>>base_str;
    int n;
    cin>>n;
    unordered_set<string> uset;
    int ans_num = 0;
    vector<int> ans_list;
    for(int i =1;i<=n;i++){
        string cur_str;
        cin>>cur_str;
        if(is_match(base_str, cur_str) && !uset.count(cur_str)){
            ans_num += 1;
            ans_list.push_back(i);
            uset.insert(cur_str);
        }
    }
    cout<<ans_num<<endl;
    for(auto num:ans_list){
        cout<<num<<" ";
    }
    return 0;
}
