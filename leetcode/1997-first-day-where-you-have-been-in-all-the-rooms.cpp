/**
 * Created by leiyang on 2024/3/28 15:49
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int _max = 1e9 + 7;
    int firstDayBeenInAllRooms(vector<int>& nextVisit) {


        int n = nextVisit.size();
        vector<int> tiaozhuan (n+1, 0);
        tiaozhuan[0] = 2; // 从0到1固定需要2天

        vector<int> tiaozhuan_qianzhuihe(n+1, 0);
        tiaozhuan_qianzhuihe[0] = 0;
        tiaozhuan_qianzhuihe[1] = 2;
        if (n == 2) return 2;

        // 从第一个房间开始
        int cur = 1;

        while(cur!=n-1) {
            if(nextVisit[cur] == cur) {
                // 当前房间就跳转当前房间，一共只需要两次
                tiaozhuan[cur] = 2;
                tiaozhuan_qianzhuihe[cur+1] = tiaozhuan_qianzhuihe[cur] + 2;
                cur++;
            }
            else {
                // 使用tiaozhuan进行累加
                int temp = 2;
                // for(int i = nextVisit[cur];i<cur;i++) {
                //     temp += tiaozhuan[i];
                //     temp %= _max;
                // }
                int ttemp = (tiaozhuan_qianzhuihe[cur] - tiaozhuan_qianzhuihe[nextVisit[cur]])%_max;
                if (ttemp<0) ttemp+=_max;
                temp += ttemp;

                tiaozhuan[cur] = temp;
                tiaozhuan_qianzhuihe[cur+1] = (tiaozhuan_qianzhuihe[cur] + temp)%_max;
                cur++;

            }
            // cout<<cur<<endl;
            // print(tiaozhuan);
            // print(tiaozhuan_qianzhuihe);
        }

        return tiaozhuan_qianzhuihe[n-1]%_max;
    }

    void print(vector<int> nums) {
        for (int num : nums) {
            cout<<num<<" ";
        }
        cout<<endl;
    }
};


int main(){
    
    
    return 0;
}
