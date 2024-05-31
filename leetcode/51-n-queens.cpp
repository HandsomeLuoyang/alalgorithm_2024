/**
 * Created by leiyang on 2024/5/24 18:32
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> ans;
    vector<vector<string>> solveNQueens(int n) {
        vector<int> cols(n, -1); // 记录已经被使用的列, col[i]代表第i行皇后的列值

        function<bool(int, int)> is_ok = [&](int row, int col){
            for(int i = 0;i<row;i++){
                // 斜左上方与其有同样的和，右上方与其有同样的差
                if ((i+cols[i] == row+col)||(i-cols[i]==row-col) || cols[i] == col)
                    return false;
            }
            return true;
        };

        function<void(int)> dfs = [&](int row){
            if(row == n){
                // 已经到最后一行了
                vector<string> s;
                for(int i = 0;i<n;i++){
//                    cout<<cols[i]<<" ";
                    string t_s(n, '.');
                    t_s[cols[i]] = 'Q';

                    s.push_back(t_s);
                }
                ans.push_back(s);
                return;
            }
            for(int j = 0;j<n;j++){
//                cout<<row<<" "<<j<<endl;
                // 这里判断是否可以放置，由于是按行来遍历的，这里只需要判断列和斜角是否存在皇后
                if(is_ok(row, j)){
                    cols[row] = j;
                    dfs(row+1);
                    cols[row] = -1;
                }
            }

            };

        dfs(0);
        return ans;

    }
};

void print(vector<vector<string>> s){
    for (auto v1:s) {
        for (auto v2:v1) {
            cout<<v2<<" ";
        }
        cout<<endl;
    }
}



int main() {
    Solution s;
    print(s.solveNQueens(4));
    return 0;
}
