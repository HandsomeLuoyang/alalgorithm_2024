/**
 * Created by leiyang on 2024/3/10 10:46
 */
#include <bits/stdc++.h>
using namespace std;

struct myListNode {
    int key;
    int val;
    myListNode *next;
    myListNode *last;
    myListNode() : key(0), val(0), next(nullptr), last(nullptr) {}
    myListNode(int x) : val(x), next(nullptr) {}
    myListNode(int key, int value, myListNode *last, myListNode* next) : key(key), val(value), next(next), last(last) {}
};

class LRUCache {
private:
    int capacity, cur_size;
    unordered_map<int, myListNode*> map;
    myListNode* head = new myListNode();
    myListNode* tail = new myListNode();
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        this->cur_size = 0;
        this->head->next = this->tail;
        this->tail->last = this->head;
    }

    int get(int key) {
        if(this->map.contains(key)) {
            // 将这个节点放到第一个去
            myListNode* target = this->map[key];
            // 从当前位置取出
            target->last->next = target->next;
            target->next->last = target->last;

            // 插入到head的下一个当中
            target->next = this->head->next;
            target->next->last = target;
            this->head->next = target;
            target->last = this->head;

            // cout<<target->val<<endl;
            return target->val;
        }
        return -1;
    }

    void put(int key, int value) {
        if(this->map.contains(key)) {
            // 将这个节点放到第一个去
            myListNode* target = this->map[key];
            // 从当前位置取出
            target->last->next = target->next;
            target->next->last = target->last;

            // 插入到head的下一个当中
            target->next = this->head->next;
            target->next->last = target;
            this->head->next = target;
            target->last = this->head;

            // 更新值
            target->val = value;
        }
        else {
            myListNode *newNode = new myListNode(key, value, head, head->next);
            this->map[key] = newNode;
            this->head->next->last = newNode;
            this->head->next = newNode;
            this->cur_size++;
            // 如果此时发现超大小了，直接删掉最后一个
            if (this->cur_size>this->capacity) {
                myListNode* fina = this->tail->last;
                fina->last->next = tail;
                tail->last = fina->last;
                this->map.erase(fina->key);
                delete fina;
                this->cur_size--;
            }
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
