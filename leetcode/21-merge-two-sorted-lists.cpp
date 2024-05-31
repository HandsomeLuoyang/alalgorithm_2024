/**
 * Created by leiyang on 2024/3/13 20:44
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newNode = new ListNode();
        ListNode* cur = newNode;
        while (list1!=nullptr && list2 !=nullptr) {
            if (list1->val <= list2->val) {
                cur->next = list1;
                list1 = list1->next;
                cur =cur->next;
            }
            else {
                cur->next = list2;
                list2 = list2->next;
                cur = cur->next;
            }
        }
        if(list1!=nullptr) {
            while (list1) {
                cur->next = list1;
                list1 = list1->next;
                cur = cur->next;
            }
        }
        if(list2!=nullptr) {
            while (list2) {
                cur->next = list2;
                list2 = list2->next;
                cur = cur->next;
            }
        }
        return newNode->next;
    }
};


int main(){
    
    
    return 0;
}
