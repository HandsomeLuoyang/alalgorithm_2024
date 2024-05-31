/**
 * Created by leiyang on 2024/4/13 18:52
 */
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main() {
    int n, temp;
    ll k;
    cin>>n>>k;
    vector<int> nums(n, 0);
    for(int i = 0;i<nums.size();i++){
        cin>>temp;
        nums[i] = abs(temp); // 直接保存绝对值
    }
    ll ans = 0;
    // 贪心，对他们的绝对值排序
    sort(nums.begin(), nums.end());
    for(int i = 0;i<n;i++){
        if(k>=nums[i]){
            k-=nums[i];
            ans+=1;
        }
        else{
            break;
        }
    }
    printf("%lld", ans);
    return 0;
}
