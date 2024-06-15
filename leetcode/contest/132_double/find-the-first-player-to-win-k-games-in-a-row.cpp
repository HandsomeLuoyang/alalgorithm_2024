/**
 * Created by leiyang on 2024/6/8 22:38
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        list<int> lst(skills.begin(), skills.end());
        unordered_map<int, int> mp;
        unordered_map<int, int> pos;
        unordered_set<int> st;

        for(int i=0;i<skills.size();i++){
            pos[skills[i]] = i;
        }

        auto winner = lst.begin();
        auto loser = lst.begin();
        while(true){
            if(*lst.begin()>*(next(lst.begin(), 1))){
                winner = lst.begin();
                loser = next(lst.begin(), 1);
            }
            else{
                loser = lst.begin();
                winner = next(lst.begin(), 1);
                st.clear();
            }
            if(st.count(*loser)){
                return pos[*winner];
            }
            st.insert(*loser);
            // 败者移到最后面去
            lst.splice(lst.end(), lst, loser);
            mp[*winner] += 1;
            if (mp[*winner] == k){
                return pos[*winner];
            }
        }
    }
};

int main() {
    vector<int> nums = {};
    return 0;
}
