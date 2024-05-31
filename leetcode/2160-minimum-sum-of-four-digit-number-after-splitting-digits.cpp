/**
 * Created by leiyang on 2024/5/21 11:15
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        vector<int> nums;
        while(num){
            int n = num%10;
            if(n!=0)
                nums.push_back(num%10);
            num/=10;
        }
        sort(nums.begin(), nums.end());
        int num1 = 0, num2 = 0;
        for(int i = 0;i<nums.size();i++){
            if(i%2==0){
                num1*=10;
                num1+=nums[i];
            }
            else{
                num2*=10;
                num2+=nums[i];
            }
        }
        return num1+num2;

    }
};

int main() {


    return 0;
}
