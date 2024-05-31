/**
 * Created by leiyang on 2024/5/20 20:15
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    string path="";
    vector<string> letterCombinations(string digits) {
        int n = digits.length();
        if(n==0) return ans;
        dfs(digits, 0);
        return ans;
    }

    void dfs(string digits, int i){
        if(i == digits.length()){
            ans.push_back(path);
            return ;
        }
        for(int j = 0;j<mapping[digits[i]-'0'].length();j++){
            path.push_back(mapping[digits[i]-'0'][j]);
            dfs(digits, i+1);
            path.pop_back();
        }
    }
};

int main() {
    Solution s;
    vector<string> ans = s.letterCombinations("23");
    return 0;
}
