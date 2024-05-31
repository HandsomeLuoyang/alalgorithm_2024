/**
 * Created by leiyang on 2024/5/19 21:35
 */
#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};



class Solution {
public:
    unordered_set<ListNode*> uset; // 用set记录走过的节点
    ListNode *detectCycle(ListNode *head) {
        ListNode* cur = head;
        while (cur){
            if(uset.count(cur)){
                return cur;
            }
            uset.insert(cur);
            cur = cur->next;
        }
        return nullptr;
    }
};



int main() {


    return 0;
}
