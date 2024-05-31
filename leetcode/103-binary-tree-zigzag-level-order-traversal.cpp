/**
 * Created by leiyang on 2024/5/20 19:42
 */
#include <bits/stdc++.h>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        deque<TreeNode*> dq = {root};
        int flag = 0; // 0 是从左往右加，1是从右往左加
        while (!dq.empty()){
            vector<int> temp;
            int sz = dq.size();
            for(int i = 0;i<sz;i++){
                if(flag == 0){
                    TreeNode* node = dq.front();
                    temp.push_back(node->val);
                    if(node->left) dq.push_back(node->left);
                    if(node->right) dq.push_back(node->right);
                    dq.pop_front();
                }
                if(flag == 1){
                    TreeNode* node = dq.back();
                    temp.push_back(node->val);
                    if(node->right) dq.push_front(node->right);
                    if(node->left) dq.push_front(node->left);
                    dq.pop_back();
                }
            }
            ans.push_back(temp);
            flag ^= 1;
        }
        return ans;
    }
};

int main() {


    return 0;
}
