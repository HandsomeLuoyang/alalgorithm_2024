/**
 * Created by leiyang on 2024/5/19 21:31
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
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(true) {
            if(fast == slow) return true;
            if(!fast || !fast->next) return false;
            fast = fast->next->next;
            slow = slow->next;
        }
    }
};


int main() {


    return 0;
}
