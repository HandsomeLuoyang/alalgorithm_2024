/**
 * Created by leiyang on 2024/3/13 14:48
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int max_ans = 0;
        int l, r;
        for(int i = 0;i<s.length();i++) {
            l = i,r=i;
            // 左摆头
            while(l>=0&&s[l]==s[i]) l--;
            // 右摆头
            while(r<s.length()&&s[r]==s[i]) r++;
            // 左右扩张
            while(l>=0&&r<s.length()&&s[l] == s[r]) {
                l--;
                r++;
            }
            cout<<l<<" "<<r<<endl;
            if (r-l-1>max_ans) {
                max_ans = r-l-1;
                ans = s.substr(l+1, max_ans);
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.longestPalindrome("bbaa");
    return 0;
}
