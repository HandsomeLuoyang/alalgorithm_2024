/**
 * Created by leiyang on 2024/3/9 22:16
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() <= 1) return s.length();
        int ans = 1;
        int temp_ans = 1;
        set<char> st;
        st.insert(s[0]);
        int l = 0, r = 1;
        while(r<s.length()) {
            // cout<<s[l]<<" "<<s[r]<<endl;
            // cout<<l<<" "<<r<<endl;
            if(!st.count(s[r])) {
                temp_ans += 1;
                ans = max(ans, temp_ans);
                st.insert(s[r]);
                r ++ ;
                continue;
            }
            while(s[l]!=s[r]&&l<=r) {
                st.erase(s[l++]);
            }
            st.erase(s[l++]);
            temp_ans = r-l+1;

            st.insert(s[r]);
            r++;
        }

        return ans;
    }
};

int main(){

    Solution s;
    s.lengthOfLongestSubstring("pwwkew");
    return 0;
}
