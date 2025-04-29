/**
 * Created by leiyang on 25-4-28 下午5:19
 */
#include <bits/stdc++.h>
using namespace std;
const int maxn=3;

int main(){
    int a[maxn];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    sort(a,a+3);
    // 是否是三角形
    if (a[0]+a[1]<=a[2]) {
        cout<<"Not triangle"<<endl;
        return 0;
    }
    if (pow(a[0], 2)+pow(a[1], 2) == pow(a[2], 2)) {
        cout<<"Right triangle"<<endl;
    }
    if (pow(a[0], 2)+pow(a[1], 2) > pow(a[2], 2)) {
        cout<<"Acute triangle"<<endl;
    }
    if (pow(a[0], 2)+pow(a[1], 2) < pow(a[2], 2)) {
        cout<<"Obtuse triangle"<<endl;
    }
    if (a[0] == a[1] || a[1]==a[2] || a[2]==a[0]) {
        cout<<"Isosceles triangle"<<endl;
    }
    if (a[0] == a[1] && a[1]==a[2]) {
        cout<<"Equilateral triangle"<<endl;
    }

    return 0;
}
