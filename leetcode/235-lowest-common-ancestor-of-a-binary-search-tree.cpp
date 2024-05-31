/**
 * Created by leiyang on 2024/5/20 19:24
 */
#include <bits/stdc++.h>

using namespace std;



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return helper(root, p, q);
    }

    TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q){
        if (!root) return nullptr;
        // 回溯的时候返回第一个祖先，也就是p和q分别在左右的
        TreeNode* left_ = helper(root->left, p, q);
        TreeNode* right_ = helper(root->right, p, q);
        // 如果仅有其中一个，代表祖先已经出现了，或者当前那个是祖先，如果两个都在，说明当前是祖先，如果两个都不在，直接返回null
        if (root == p || root == q || (left_&&right_)) return root;

        if (left_) return left_;
        if (right_) return right_;
        return nullptr;
    }
};

int main() {


    return 0;
}
