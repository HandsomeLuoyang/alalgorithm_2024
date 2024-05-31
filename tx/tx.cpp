/**
 * Created by leiyang on 2024/5/14 19:15
 */
#include <bits/stdc++.h>

using namespace std;

// 1+2*3/4+5

int calculate(string s){
    vector<int> stk;
    char preSign = '+';
    int num = 0;
    int n = s.length();
    for(int i = 0;i<n;i++){
        if(isdigit(s[i])){
            num = num*10 + s[i] - '0';
        }
        if(!isdigit(s[i]) && s[i] != ' ' || i==n-1){
            switch (preSign) {
                case '+':
                    stk.push_back(num);
                    break;
                case '-':
                    stk.push_back(-num);
                    break;
                case '*':
                    stk.back() *= num;
                    break;
                case '/':
                    stk.back() /= num;
                    }
            preSign = s[i];
            num = 0;
        }

    }
    int ans = 0;
    for(auto x:stk){
        ans+=x;
    }
    return ans;
}


int main() {
    string s;
    cin>>s;
    cout<<calculate(s);
    return 0;
}
