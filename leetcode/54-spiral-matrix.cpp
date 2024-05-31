/**
 * Created by leiyang on 2024/3/29 13:58
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = n-1, up = 0, down = m-1;
        int flag = 0; // 0向右，1向下，2向左，3向上
        int i = 0, j=0;
        vector<int> ans;

        while (true) {
            ans.push_back(matrix[i][j]);
            if (flag == 0) {
                if (j == right) {
                    // 已经到了最右边
                    flag = 1;
                    up+=1;
                    i++;
                }
                else {
                    j++;
                }
            }
            else if(flag == 1) {
                if(i == down) {
                    // 到了最下面
                    flag = 2;
                    right-=1;
                    j--;
                }
                else {
                    i++;
                }
            }

            else if(flag == 2) {
                if(j == left) {
                    // 到了最左边
                    flag = 3;
                    down -= 1;
                    i--;
                }
                else {
                    j--;
                }
            }
            else {
                if(i == up) {
                    //到了最上面
                    flag = 0;
                    left+=1;
                    j++;
                }
                else {
                    i--;
                }
            }
            if(left>right || up>down) break;
        }
        return ans;
    }
};

int main(){
    
    
    return 0;
}
