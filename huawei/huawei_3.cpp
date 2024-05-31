/**
 * Created by leiyang on 2024/5/15 18:33
 */
#include <bits/stdc++.h>

using namespace std;

bool can(vector<int> nums, int target){
    vector<bool> dp(target+1, false);
    dp[0] = true;
    for(int num:nums){
        for(int i = target;i>=num;--i){
            dp[i] =dp[]
        }
    }
}


int main() {
    int T;
    int num;
    cin>>T>>num;
    vector<int> nums(num, 0);
    for(int i = 0;i<num;i++){
        int temp;
        cin>>temp;
        nums[i] = temp;
    }
    int total = accumulate(nums.begin(), nums.end(), 0);
    if (total != T*2){
        cout<<-1<<endl;
        return 0;
    }
    return 0;
}
