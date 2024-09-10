/**
 * Created by leiyang on 2024/3/10 10:46
 */
#include <bits/stdc++.h>
using namespace std;

class LRUCache {
private:
    int capacity;
    int cur_size;
    // key -> iter
    map<int, list<pair<int, int>>::iterator> mp;
    // <key, value>
    list<pair<int, int>> lst;
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        this->cur_size = 0;
    }

    int get(int key) {
        if(mp.count(key)) {
            int ans = mp[key]->second;
            // 移动到链表的最前面去
            lst.splice(lst.begin(), lst, mp[key]);
            return ans;
        }
        return -1;
    }

    void put(int key, int value) {
        // 存在更新
        if(mp.count(key)) {
            mp[key]->second = value;
            // 使用get来放到最前面去
            this->get(key);
            return ;
        }
        // 不存在插入
        // 1. 插入
        lst.emplace_front(key, value);
        mp[key] = lst.begin();
        this->cur_size ++ ;
        // 2. 容量判断
        if (this->cur_size>this->capacity) {
            // 删除
            mp.erase(lst.rbegin()->first);
            lst.pop_back();
            this->cur_size--;
        }
    }
};


int main(){
    LRUCache lRUCache = LRUCache(2);
    lRUCache.put(1, 1); // 缓存是 {1=1}
    lRUCache.put(2, 2); // 缓存是 {1=1, 2=2}
    lRUCache.get(1);    // 返回 1
    lRUCache.put(3, 3); // 该操作会使得关键字 2 作废，缓存是 {1=1, 3=3}
    lRUCache.get(2);    // 返回 -1 (未找到)
    lRUCache.put(4, 4); // 该操作会使得关键字 1 作废，缓存是 {4=4, 3=3}
    lRUCache.get(1);    // 返回 -1 (未找到)
    lRUCache.get(3);    // 返回 3
    lRUCache.get(4);    // 返回 4
    return 0;
}
