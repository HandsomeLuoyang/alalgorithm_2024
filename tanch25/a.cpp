#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
long long n;
int m;
long long query[N];

unordered_map<long long,long long>mp;
unordered_map<long long,long long>smp;
long long get_top (long long t) {
    int k = 0;
    if (t == 1) return t;
    long long now = 1;
    while (now <= t) {
        now <<= 1;
        k++;
    }
    long long tp = (1LL << (k - 1));
    //最高位置1对应的数字
    return tp;
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> query[i];
    }
    //询问的数字次数至多有二进制长度数x2
    long long st = n;
    mp[n] = 1;
    while (n) {
        //找到当前最高位
        if (n == 1) break;
        long long t = get_top(n);
        if (t > 1) {
            if (mp.count(t / 2)) {
                mp[t / 2] += 2;
            }
            else mp[t / 2] = 2;
            n -= t;

            while (t != 0 && n < t / 2) {
                if (smp.count(n)) {
                    smp[n] += 1;
                }
                else smp[n] = 1;
                t /= 2;
            }
            if (smp.count(n)) {
                smp[n] += 1;
            }
            else smp[n] = 1;
        }

    }
//    cout << mp[8] << mp[4] << smp[2] << mp[1] << endl;
    //将最高位置出现的次数从大到小进行递推
    long long mt = get_top(st) / 2;
    //最高位置逐渐减少
    while(mt > 1) {
        mp[mt / 2] += 2 * mp[mt];
        mt /= 2;
    }
    mp[0] = 0;
    smp[0] = 0;
    for (int i = 1; i <= m; i++) {
        if (i == m) printf("%lld", mp[query[i]] + smp[query[i]]);
        else printf("%lld ", mp[query[i]] + smp[query[i]]);
    }
    return 0;
}
//1000000000000000 1
//1