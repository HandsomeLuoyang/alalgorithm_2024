/**
 * Created by leiyang on 2025/2/27 14:52
 */
#include <bits/stdc++.h>
using namespace std;

int rand7() {
    return 1;
}

class Solution {
public:
    int rand10() {
        // ����5*rand7С��15�Ĳ��֣�Ҳ����5��10����ȥrand7��С��5�Ĳ��֣����Եõ�1,2,3,4,5,6,7,8,9
        int ori = 5*rand7();
        while (ori>10) {
            ori = 5*rand7();
        }

        int jian = rand7()-1;
        while (jian >4 ) {
            jian = rand7()-1;
        }
        return ori - jian;
    }
};

int main(){
    
    
    return 0;
}
