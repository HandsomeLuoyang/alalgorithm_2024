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
        // 先求出链表长度
        int n = 0;
        ListNode* cur = head;
        while(cur){
            n+=1;
            cur= cur->next;
        }
        ListNode* dummy = new ListNode(-1, head);
        ListNode* p0 = dummy;

        ListNode* pre = nullptr;

        ListNode *nxt = nullptr;
        cur = p0->next;
        while(n>=k){
            n-=k;
            for(int i = 0;i<k;i++) {
                nxt = cur->next;
                cur->next = pre;
                pre = cur;
                cur = nxt;
            }

            nxt = p0->next;
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
