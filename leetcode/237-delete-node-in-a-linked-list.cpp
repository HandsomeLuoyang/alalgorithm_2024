/**
 * Created by leiyang on 2024/5/19 23:24
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
    void deleteNode(ListNode* node) {
        // 将当前节点的值用下一个节点替代，然后删除下一个节点
        node->val = node->next->val;
        node->next = node->next->next;


    }
};

int main() {


    return 0;
}
