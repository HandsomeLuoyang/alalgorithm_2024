/**
 * Created by leiyang on 25-4-28 ����5:32
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        int a = 0, b = 1, c = 1;
        if (n == 0) return 0;
        if (n==1 || n==2) return 1;
        int k;
        for (int i = 3; i <= n; i++) {
            k = a + b + c;
            a = b, b = c, c = k;
        }
        return k;
    }
};

int main(){
    
    
    return 0;
}
