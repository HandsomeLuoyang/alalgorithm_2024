/**
 * Created by leiyang on 2024/4/10 12:45
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string maximumBinaryString(string binary) {
        int n = binary.size(), i = binary.find('0');
        if (i == string::npos) {
            return binary;
        }
        int zeros = count(binary.begin(), binary.end(), '0');
        string s(n, '1');
        s[i + zeros - 1] = '0';
        return s;
    }
};

int main() {
    string binary = "11";
    Solution s;
    cout<<s.maximumBinaryString(binary);

    return 0;
}
