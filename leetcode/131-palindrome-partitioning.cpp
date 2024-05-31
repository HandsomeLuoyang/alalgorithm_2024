/**
 * Created by leiyang on 2024/5/20 22:23
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> ans;
    vector<string> path;
    vector<vector<string>> partition(string s) {
        dfs(s, 0);
        return ans;
    }

    void dfs(string s, int i){
        // 这里的i是起始位置,那么j就是终止位置
        int n = s.length();
        if(i==n){
            ans.push_back(path);
            return ;
        }
        for(int j = i;j<n;j++){
            string sub_str = s.substr(i, j-i+1);
            if (isHui(sub_str)) {
                path.push_back(sub_str);
                dfs(s, j + 1);
                path.pop_back();
            }
        }
    }

    bool isHui(string s){
        int i = 0, j = s.size()-1;
        while(i<j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }
        return true;
    }
};

int main() {


    return 0;
}
