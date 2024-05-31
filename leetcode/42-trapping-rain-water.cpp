/**
 * Created by leiyang on 2024/4/10 14:34
 */
#include <bits/stdc++.h>

using namespace std;
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        stack<pair<int, int> > myStack;
        int ans = 0;
        for(int i =0;i<height.size();i++){
            while(!myStack.empty() && myStack.top().second<height[i]){
                pair<int, int> temp = myStack.top();
                cout<<temp.second<<" ";
                myStack.pop();
                if(!myStack.empty()){
                    int area = (i-myStack.top().first-1) * (min(myStack.top().second, height[i]) - temp.second);
                    cout<<area<<endl;
                    ans += area;
                }
            }
            myStack.emplace(i, height[i]);

        }
        return ans;
    }
};
int main() {
    vector<int> height = {4,2,0,3,2,5};
    Solution s;
    s.trap(height);
    return 0;
}
