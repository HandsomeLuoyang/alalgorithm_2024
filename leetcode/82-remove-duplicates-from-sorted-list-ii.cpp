/**
 * Created by leiyang on 2024/5/20 0:01
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        // 可能删头，创造哨兵
        ListNode *dummy = new ListNode(-200, head);
        ListNode *cur = dummy;
        while(cur->next && cur->next->next){
            ListNode *nxt = cur->next;
            int temp_val = nxt->val;
            if (nxt->next->val == temp_val){
                while(nxt->next && nxt->next->val == temp_val){
                    nxt = nxt->next;
                }
                cur->next = nxt->next;
            }
            else{
                cur = cur->next;
            }

        }
        return dummy->next;
    }
};

int main() {


    return 0;
}
