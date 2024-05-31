/**
 * Created by leiyang on 2024/3/9 22:16
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<2) return s.length();
        int max_length = 1;
        unordered_set<char> set = {};
        set.insert(s[0]);
        int i = 0, j = 1;
        while (j<s.length()) {
            if (!set.count(s[j])) {
                set.insert(s[j++]);
                max_length = max(max_length, j-i);
            }
            else {
                set.erase(s[i++]);
            }
        }
        return max_length;
    }
};

int main(){
    
    Solution s;
    s.lengthOfLongestSubstring("pwwkew");
    return 0;
}
