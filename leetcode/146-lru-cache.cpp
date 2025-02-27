#include <bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    int capacity;
    int cur_size;
    unordered_map<int, list<pair<int, int>>::iterator> my_map;
    list<pair<int,int>> my_list;
    LRUCache(int capacity) {
        this->capacity = capacity;
        this->cur_size = 0;
    }
    
    int get(int key) {
        if (my_map.count(key)) {
            // 存在的情况放到最前面去
            my_list.splice(my_list.begin(), my_list, my_map[key]);
        return my_list.begin()->second;
        }
        // 不存在的情况
        return -1;
    }

    void put(int key, int value) {
        if (my_map.count(key)) {
            my_list.splice(my_list.begin(), my_list, my_map[key]);
            my_map[key]->second = value;
            return ;
        }

        my_list.emplace_front(key, value);
        my_map[key] = my_list.begin();
        this->cur_size += 1;
        if (this->cur_size > this->capacity) {
            my_map.erase(my_list.rbegin()->first);
            my_list.pop_back();
            this->cur_size -= 1;
        }
    }
};

int main() {
    LRUCache *lru = new LRUCache(2);
    lru->put(1, 0);
    lru->put(2, 2);
    lru->get(1);
    lru->put(3, 3);
    lru->get(2);
    lru->put(4, 4);
    lru->get(1);
    lru->get(3);
    lru->get(4);
}
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */