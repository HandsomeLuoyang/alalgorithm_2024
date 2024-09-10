/**
 * Created by leiyang on 2024/3/10 14:29
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || !head->next) return head;
        int n = 0;
        for(ListNode* cur = head;cur;cur=cur->next) {
            n++;
        }

        ListNode* dummy = new ListNode(0, head);
        ListNode* p0 = dummy;
        ListNode* pre = nullptr;
        ListNode* cur = head;

        for(;n>=k;n-=k) {
            // 反转这k个节点
            for(int i=0;i<k;i++) {
                ListNode* nxt = cur->next;
                cur->next = pre;
                pre = cur;
                cur = nxt;
            }
            ListNode* nxt = p0->next;
            p0->next->next = cur;
            p0->next = pre;
            p0 = nxt;
        }
        return dummy->next;
    }
};

int main(){
    return 0;
}
