/**
 * Created by leiyang on 25-4-28 обнГ5:14
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 1;
    int ans = -1;
    int _max = 0;
    while (n!=8) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a+b > _max) {
            _max = a+b;
            ans = n;
        }
        n++;
    }
    if (_max<=8)
        ans = 0;
    cout<<ans<<endl;
    return 0;
}
