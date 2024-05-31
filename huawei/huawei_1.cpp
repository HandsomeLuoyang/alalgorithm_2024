/**
 * Created by leiyang on 2024/5/15 18:33
 */
#include <bits/stdc++.h>

using namespace std;

/*

2 5
A 103
A 102
A 102
Q 103
A 101


2 4
A 101
A 102
A 103
D 102
 */

class ListNode{
public:
    int val;
    ListNode* next;
    ListNode* last;
    ListNode(int val, ListNode* last, ListNode* next):val(val), next(next), last(last){}
};


class LRU{
public:
    int capacity;
    int cur_size = 0;
    ListNode* preNode = new ListNode(-1, nullptr, nullptr);
    ListNode* endNode = new ListNode(-1, nullptr, nullptr);
    unordered_map<int, ListNode*> cacheMap;


    LRU(int capacity):capacity(capacity){
        preNode->next= endNode;
        endNode->last = preNode;
    }

    void get(int key){
        // 查询是不会插值的
        if(cacheMap.count(key)){
            // 已存在，放到最前面去即可
            ListNode * node = cacheMap[key];

            node->last->next = node->next;
            node->next->last = node->last;

            node->next = this->preNode->next;
            this->preNode->next->last = node;

            this->preNode->next = node;
            node->last = this->preNode;
        }
    }

    void del(int key){
        if (cacheMap.count(key)){
            // 存在才需要删
            ListNode* delNode = cacheMap[key];
            delNode->last->next = delNode->next;
            delNode->next->last = delNode->last;
            cacheMap.erase(delNode->val);
            delete delNode;
            this->cur_size--;
        }
        else{
            return ;
        }
    }

    void add(int key){
        if(cacheMap.count(key)){
            // 已存在，放到最前面去即可
            ListNode * node = cacheMap[key];

            node->last->next = node->next;
            node->next->last = node->last;

            node->next = this->preNode->next;
            this->preNode->next->last = node;

            this->preNode->next = node;
            node->last = this->preNode;
        }
        else{
            if (this->cur_size<this->capacity) {
                // 不存在，新建并放到最前面去
                ListNode *newNode = new ListNode(key, this->preNode, this->preNode->next);
                newNode->next->last = newNode;
                this->preNode->next = newNode;
                cacheMap[key] = newNode;
                this->cur_size++;
            }
            else{
                //需要淘汰掉末尾的一个
                ListNode* delNode = endNode->last;
                delNode->last->next = endNode;
                delNode->next->last = delNode->last;
                cacheMap.erase(delNode->val);
                delete delNode;
                this->cur_size--;
                // 在进行插入
                this->add(key);
            }
        }
    }

    void output(){
        vector<int> ans;
        ListNode* node = preNode->next;
        while(node!=this->endNode){
            ans.push_back(node->val);
            node = node->next;
        }
        sort(ans.begin(), ans.end());
        if (ans.size()>1){
            for(int i = 0;i<ans.size()-1;i++){
                cout<<ans[i]<<" ";
            }
        }
        if(!ans.empty()){
            cout<<ans[ans.size()-1];
        }
    }
};


int main() {
    int N, k;
    cin>>N>>k;
    LRU lru = LRU(N);
    while(k--){
        char c;
        int key;
        cin>>c>>key;
        if (c=='A'){
            lru.add(key);
        }
        else if(c=='Q'){
            lru.get(key);
        }
        else if(c == 'D'){
            lru.del(key);
        }
    }
    lru.output();
    return 0;
}
