/**
 * Created by leiyang on 2024/5/19 23:54
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
        if (!head){
            return head;
        }
        ListNode* pre = head;
        while(pre->next){
            if(pre->val == pre->next->val){
                pre->next = pre->next->next;
            }else{
                pre = pre->next;
            }
        }
        return head;
    }
};

int main() {


    return 0;
}
