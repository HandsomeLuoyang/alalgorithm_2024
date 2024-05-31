/**
 * Created by leiyang on 2024/3/13 14:48
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() < 2) return s;
        int max_len = 0;
        string res;
        // 考虑单数回文
        for (int i = 0; i < s.length(); ++i) {
            int l = i-1, r = i+1;
            while(l>=0&&r<s.length() && s[l] == s[r]) {
                if(r-l+1>max_len) {
                    max_len = r-l+1;
                    res = s.substr(l, max_len);
                }
                l--;
                r++;
            }
        }
        // 考虑双数回文
        for (int i = 0; i < s.length(); ++i) {
            int l = i, r = i+1;
            while(l>=0&&r<s.length() && s[l] == s[r]) {
                if(r-l+1>max_len) {
                    max_len = r-l+1;
                    res = s.substr(l, max_len);
                }
                l--;
                r++;
            }
        }
        if (max_len == 0) res = s[0];

        return res;
    }
};

int main(){
    Solution s;
    cout<<s.longestPalindrome("bbaa");
    return 0;
}
