/**
 * Created by leiyang on 2024/5/15 18:33
 */
#include <bits/stdc++.h>

using namespace std;



string findSubstring(string target, string pattern){
    // 首先要解析这个pattern，右括号用栈
    stack<char> stk;
    stack<char> temp_stk;
    string handle_pattern;
    for(int i = 0;i<pattern.size();i++){
        if (pattern[i] == 'A' || pattern[i] =='N' || pattern[i] =='(')
        {
            // 直接入栈
            stk.push(pattern[i]);
        }
        if (pattern[i] == ')'){
            // 将括号内的字符重复前面的数字遍，肯定有数字
            while (!isdigit(stk.top()))// 栈顶是数字的时候才停止，左括号也出去了
            {
                temp_stk.push(stk.top());// 将pop的东西存一下
                stk.pop();
            }
        }
    }

}




int main() {

    string pattern;
    string target;
    cin>>pattern>>target;
    return 0;
}
