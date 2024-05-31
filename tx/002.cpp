/**
 * Created by leiyang on 2024/3/30 20:22
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n, 0);
    int jishu = 0;
    int oushu = 0;

    for(int i = 0;i<n;i++) {
        int temp;
        cin>>temp;
        nums[i] = temp;

        if(temp%2 == 0)oushu++;
        else jishu++;
    }
    if (oushu == jishu) {
        // 已经可以
        cout<<0<<endl;
        return 0;
    }

    // 乘以2必然变成偶数，所以如果偶数少，直接乘就可以，乘的次数是差值/2
    if(jishu>oushu) {
        cout<<(jishu-oushu)/2<<endl;
        return 0;
    }

    // 如果偶数多，那么只能将偶数变成奇数，很多偶数需要许多次除法才能变成奇数，把这个次数存储并排序，取前(oushu-jishu)/2个值的和
    vector<int> cishu(oushu, 1e9);
    for(int i = 0;i<nums.size();i++) {
        if(nums[i]%2!=0) continue;
        int temp = 0;
        while(nums[i]%2==0) {
            nums[i] = nums[i]>>1;
            temp += 1;
        }
        cishu[i] = temp;
    }

    sort(cishu.begin(), cishu.end());
    int result = 0;
    for(int i = 0;i<(oushu-jishu)/2;i++) {
        result += cishu[i];
    }
    cout<<result<<endl;
    
    return 0;
}
