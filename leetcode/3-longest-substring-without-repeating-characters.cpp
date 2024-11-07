/**
 * Created by leiyang on 2024/3/9 22:16
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_set<char> uset;
        int i = 0, j = 0;
        for(;j<s.length();j++){
            if(uset.count(s[i])){

            }
        }
    }
};

int main(){

    Solution s;
    cout<<s.lengthOfLongestSubstring("pwwkew");
    return 0;
}
