/**
 * Created by leiyang on 2024/5/20 20:05
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
    int ans;
    int max_deep = -1;
    int findBottomLeftValue(TreeNode* root) {
        helper(root, 0);
        return ans;
    }

    void helper(TreeNode* root, int deep){
        // 带着深度前序遍历，如果当前深度超过已知最大深度，就更新这个值
        if(!root) return;
        if(deep>max_deep) {
            ans = root->val;
            max_deep = deep;
        }
        helper(root->left, deep+1);
        helper(root->right, deep+1);
    }
};

int main() {


    return 0;
}
