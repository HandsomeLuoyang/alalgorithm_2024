/**
 * Created by leiyang on 2024/3/20 10:46
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<2) return ;
        k = k%nums.size();
        vector<int> tmp = nums;
        nums.clear();
        for (int i = tmp.size()-k;i<tmp.size();i++) {
            nums.push_back(tmp[i]);
        }
        for (int i = 0;i<tmp.size()-k;i++) {
            nums.push_back(tmp[i]);
        }
    }
};

int main(){
    
    
    return 0;
}
