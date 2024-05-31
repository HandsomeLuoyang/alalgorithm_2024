/**
 * Created by leiyang on 2024/3/20 13:02
 */
#include <bits/stdc++.h>
using namespace std;



class RandomizedSet {
public:
    unordered_map<int, int> umap;
    vector<int> vec;
    int size = 0;
    int idx = 0;
    RandomizedSet() {
    }

    bool insert(int val) {
        if(umap.count(val)) return false;
        vec.push_back(val);
        umap[val] = idx;
        idx++;
    }

    bool remove(int val) {
        if(!umap.count(val)) return false;
        int cur_idx = umap[val];
    }

    int getRandom() {

    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */


int main(){
    
    
    return 0;
}
