/**
 * Created by leiyang on 2024/3/11 15:54
 */
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> q, int size) {
    for (int i = 0; i < size; ++i) {
        cout<<q[i]<<" ";

    }
    cout<<endl;
}

void quick_sort(vector<int> q, int l, int r)
{
    if (l >= r) return;

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    print(q, q.size());
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}

int main(){
    vector<int> q = {4,2,3,6,5};
    quick_sort(q, 0, q.size()-1);
    print(q, q.size());
    return 0;
}
