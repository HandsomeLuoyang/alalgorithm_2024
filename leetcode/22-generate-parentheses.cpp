/**
 * Created by leiyang on 2024/5/24 14:13
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> ans;
    string path;
    vector<string> generateParenthesis(int n) {
        dfs(n, 0, 0, 0);
        return ans;
    }
    void dfs(int n, int i, int left, int right){
        if(left == n && left==right){
            ans.push_back(path);
            return ;
        }
        if(right>left || left>n) return;
        for(int j = i;j<2*n;j++){
            if (left<n){
                path.push_back('(');
                dfs(n, j+1, left+1,right);
                path.pop_back();
            }
            if (left>right)
            {
                path.push_back(')');
                dfs(n, j+1, left,right+1);
                path.pop_back();
            }
        }
    }
};

int main() {
    Solution s;
    s.generateParenthesis(3);
    return 0;
}
