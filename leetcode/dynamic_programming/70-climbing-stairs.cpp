/**
 * Created by leiyang on 2024/3/13 14:18
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n<3) return n;
        int f1 = 1, f2 = 1;
        int nxt;
        for(int i = 2;i<=n;i++){
            nxt = f1+f2;
            f1 = f2;
            f2 = nxt;
        }
        return nxt;
    }
};

int main(){
    
    
    return 0;
}
