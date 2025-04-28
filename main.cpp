#include <bits/stdc++.h>
using namespace std;
const int maxn = 10000;

int main() {
    int n, a[maxn];
    while (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
