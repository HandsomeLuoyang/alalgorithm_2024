/**
 * Created by leiyang on 2024/3/10 10:08
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        // 前置节点，统一操作
        ListNode *preHead = new ListNode(0, head);
        ListNode* cur = head;
        ListNode* pre = nullptr;
        ListNode* nxt = head->next;
        while (cur) {
            cur->next = pre;
            pre = cur;
            cur = nxt;
            if (!nxt) return pre;
            nxt = nxt->next;
        }
        return pre;
        // return pre;
    }
};

int main(){


    return 0;
}
