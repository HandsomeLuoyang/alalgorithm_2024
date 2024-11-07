/**
 * Created by leiyang on 2024/4/10 14:34
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int trap(vector<int> &height) {
        int ans = 0;
        stack<int> stk;
        for(int i = 0;i < height.size();i++){
            while(!stk.empty() && height[i] > height[stk.top()]){
                int top = stk.top();
                stk.pop();
                if(stk.empty()){
                    break;
                }
                int left = stk.top();
                int curWidth = i - left - 1;
                int curHeight = min(height[i], height[left]) - height[top];
                ans += curWidth * curHeight;
            }
            stk.push(i);
        }
        return ans;
    }
};

int main() {
    vector<int> height = {4, 2, 0, 3, 2, 5};
    Solution s;
    cout<<s.trap(height);
    return 0;
}
