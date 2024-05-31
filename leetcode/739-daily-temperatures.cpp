/**
 * Created by leiyang on 2024/3/26 13:51
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int> > myStack; // 存索引和值
        vector<int> ans(temperatures.size(), 0);
        for(int i = 0;i<temperatures.size();i++){
            while(!myStack.empty() && myStack.top().second<temperatures[i]){
                ans[myStack.top().first] = i - myStack.top().first;
                myStack.pop();
            }
            myStack.emplace(i, temperatures[i]);
        }
        return ans;
    }
};


int main(){
    
    
    return 0;
}
