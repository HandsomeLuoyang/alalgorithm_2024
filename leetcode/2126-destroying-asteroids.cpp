/**
 * Created by leiyang on 2024/5/16 21:38
 */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        for(int i = 0;i< asteroids.size();i++){
            if (mass>=asteroids[i]){
                if(INT32_MAX-mass<=asteroids[i]){
                    return true;
                }
                mass+=asteroids[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};


int main() {


    return 0;
}
