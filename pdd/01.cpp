/**
 * Created by leiyang on 2024/3/24 19:05
 */
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> nums) {
    cout<<"nums:";
    for (int num : nums) {
        cout<<num<<" ";
    }
    cout<<endl;
}


/*
1
10 4 1 6
1 8 2 9 3 3 4 5 3 200
 */

int main(){
    int T;
    cin>>T;
    int n, m, k, d;
    for(int _ = 0;_<T;_++) {
        cin>>n>>m>>k>>d;
        vector<int> nums;
        for(int i = 0;i<n;i++) {
            int x;
            scanf("%d", &x);
            nums.push_back(x);
        }

        // 开始算法
        // 排序
        sort(nums.begin(), nums.end());
        // print(nums);
        unordered_set<int> uset;
        int right = nums.size()-1;
        int left = nums.size()-1-m;
        while (left>=0 && d>0) {
            if (k*nums[right] > (k+1)*nums[left]) {
                uset.insert(right);
                d--;
            }
            right--;
            left--;
            if(left<nums.size()-uset.size()-m-1) break;
        }

        // while(right>0 && d>0) {
        //     // 如果剩余的最大m+1个值当中最大值依然比最小值有成立关系，依然删除
        //     if (k*nums[right] > (k+1)*nums[right-1]) {
        //         uset.insert(right);
        //         d--;
        //     }
        //     if(nums.size()-right-uset.size()>m) break;
        //     right--;
        // }

        vector<int> newNum;
        for(int i = 0;i<nums.size();i++) {
            if(!uset.count(i)) {
                newNum.push_back(nums[i]);
            }
        }
        // print(newNum);
        // cout<<"usetSize:"<<uset.size()<<endl;

        // 当k*a_n > (k+1)a_n-1时候，去掉a_n
        int sum = 0;
        // 最大的m个数字乘以-k
        for(int i = newNum.size()-1;i>=0, m>0;i--, m--) {
            newNum[i] *= -k;
        }
        for (int num : newNum) sum+=num;

        // for(int i=right;i>=0, m>0;i--, m--) {
        //     nums[i] *= -k;
        // }
        // for(int i = 0;i<=right;i++) {
        //     sum+=nums[i];
        // }

        cout<<sum<<endl;
    }
    
    return 0;
}
