/**
 * Created by leiyang on 2024/3/29 20:50
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(-1, head);
        ListNode* p0 = dummy;
        for(int i = 0;i<left-1;i++){
            p0 = p0->next;
        }

        // 此时p0已经走到了left的前一个，现在反转left到right
        ListNode* pre = nullptr;
        ListNode* cur = p0->next;
        for(int i = 0;i<right-left+1;i++){
            ListNode* nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        p0->next->next = cur;
        p0->next = pre;
        return dummy->next;

    }
};

int main(){
    
    
    return 0;
}
