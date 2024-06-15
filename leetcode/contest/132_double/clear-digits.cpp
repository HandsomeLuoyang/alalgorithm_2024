/**
 * Created by leiyang on 2024/6/8 22:31
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        stack<char> ch;
        for(auto c:s){
            if (isdigit(c) && !ch.empty()){
                char top = ch.top();
                if(!isdigit(top)){
                    ch.pop();
                    continue;
                }
            }
            ch.push(c);
        }
        string ans;
        while(!ch.empty()){
            ans.push_back(ch.top());
            ch.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    string s = "abc";
    Solution c;
    cout<<c.clearDigits(s);

    return 0;
}
