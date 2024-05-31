/**
 * Created by leiyang on 2024/5/19 18:09
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
};


int main() {


    return 0;
}
