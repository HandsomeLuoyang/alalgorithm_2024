#include<bits/stdc++.h>
using namespace std;



int main() {
    long long n,m,k;
    cin >> n >> m >> k;
    long long x = 0, y = 0;
    long long bx = n, by = m;
    int dx = 1, dy = 1;
    k += 1;
    while (k -- ) {
        //每次考虑对应的位置
        if (abs(bx - x) < abs(by - y)) {
            //x先到对应的位置
            y = y + dy * abs(bx - x);
            x = bx;
            if (dx == 1) {
                bx = 0;
            }
            else bx = n;
            dx *= -1;
            if (y == by) {
                if (dy == 1) {
                    by = 0;
                }
                else by = m;
                dy *= -1;
            }
        }
        else {
            x = x + dx * abs(by - y);
            y = by;
            if (dy == 1) {
                by = 0;
            }
            else by = m;
            dy *= -1;
            if (x == bx) {
                if (dx == 1) {
                    bx = 0;
                }
                else bx = n;
                dx *= -1;
            }
        }
    }
    printf("%lld %lld",x, y);
    return 0;
}