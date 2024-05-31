/**
 * Created by leiyang on 2024/5/19 23:40
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // 哨兵节点
        ListNode* dummy = new ListNode(-1, head);

        ListNode* cur = dummy;
        int length = 0;
        while(cur){
            length++;
            cur = cur->next;
        }
        // 获得了链表长度，那么倒数n个就是正数length-n+1个
        ListNode* pre = dummy;
        // 向前走length-n-1步
        for(int i = 0;i<length-n-1;i++){
            pre = pre->next;
        }
        pre->next = pre->next->next;
        return dummy->next;
    }
};


int main() {


    return 0;
}
