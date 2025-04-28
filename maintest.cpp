/**
 * Created by leiyang on 25-4-28 обнГ3:21
 */
#include <bits/stdc++.h>
using namespace std;
const int maxn = 10000;

int main(){
    int n, a[maxn];
    while (scanf("%d", &n) != EOF && n != 0) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
