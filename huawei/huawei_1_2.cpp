/**
 * Created by leiyang on 2024/5/16 10:48
 */
#include <bits/stdc++.h>

using namespace std;

class LRUCache {
public:
    int capacity;
    int cur_size = 0;
    unordered_map<int, list<pair<int, int> >::iterator> mp;
    list<pair<int, int> > lst;

    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {
        if (mp.count(key)){
            // 存在key
            // 放到最前面去
            auto iter =  mp[key];
            lst.splice(lst.begin(), lst, iter);
            return iter->second;
        }
        return -1;
    }

    void put(int key, int value) {
        if(mp.count(key)){
            // 更新并放到前面
            auto iter  = mp[key];
            iter->second = value;

            lst.splice(lst.begin(), lst, iter);
        }
        else{
            // 不存在准备插入
            if(cur_size==capacity){
                // 拿到队尾元素
                auto iter = lst.rbegin();
                // 从mp中删除
                mp.erase(iter->first);
                // 删除队尾元素
                lst.pop_back();
                cur_size--;
            }
            // 再插入
            lst.emplace_front(key, value);
            mp[key] = lst.begin();
            cur_size++;

        }
    }
};



int main() {
    LRUCache cache = LRUCache( 2 /* 缓存容量 */ );

    cache.put(1, 1);
    cache.put(2, 2);
    cache.get(1);       // 返回  1
    cache.put(3, 3);    // 该操作会使得密钥 2 作废
    cache.get(2);       // 返回 -1 (未找到)
    cache.put(4, 4);    // 该操作会使得密钥 1 作废
    cache.get(1);       // 返回 -1 (未找到)
    cache.get(3);       // 返回  3
    cache.get(4);       // 返回  4

    for(auto it = cache.lst.begin();it!=cache.lst.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
