/**
 * Created by leiyang on 2025/2/27 20:25
 */
#include <bits/stdc++.h>
using namespace std;

unsigned int getMax(int *A, int n) {
    // unsigned int 是8个字节
    // 没有负数，最高位非符号位
    // 让值最大，那么要从最高位开始，尽量高的位置上有1
    // 构造2^0到2^64次方的值，分别遍历这个数组，如果获得的值>=构造值，
}

int main(){
    int *A = new int[3];
    A[0] = 1;
    A[1] = 4;
    A[2] = 5;
    getMax(A, 100);
    return 0;
}
