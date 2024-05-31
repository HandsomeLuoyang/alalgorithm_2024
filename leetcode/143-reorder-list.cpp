/**
 * Created by leiyang on 2024/5/19 22:25
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
    void reorderList(ListNode* head) {
        // 先找到中间的节点
        // 然后将中间到结尾的节点都进行反转，记录最后一个节点
        ListNode* mid = middleNode(head);
        ListNode* head2 = reverseList(mid);
        while (head2->next){
            ListNode* nxt = head->next;
            ListNode* nxt2 = head2->next;
            head->next = head2;
            head2->next = nxt;
            head = nxt;
            head2 = nxt2;
        }
    }

    ListNode* middleNode(ListNode* head) {
        if (!head) return head;
        // 两个指针，一个走一步，一个走两步，两步的到结尾，一步的就返回
        ListNode* step1 = head;
        ListNode* step2 = head;
        while(step2 && step2->next){
            step2 = step2->next->next;
            step1 = step1->next;
        }
        return step1;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* cur = head;
        while (cur){
            ListNode* nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        return pre;
    }
};

int main() {


    return 0;
}
