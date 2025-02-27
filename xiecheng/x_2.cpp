/**
 * Created by leiyang on 2024/10/10 10:01
 */
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

bool is_prime(ull n){
    for(ull i = 2;i<=n/2;i++){
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    ull n;
    scanf("%lld", &n);
    ull ans = 0;
    while (n){
        if(is_prime(n)){
            n = n - (n/3) -1;
        }
        else{
            n = n- (n/2) - 1;
        }
        ans++;
    }
    printf("%lld", ans);

    return 0;
}
