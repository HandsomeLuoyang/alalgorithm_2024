/**
 * Created by leiyang on 2024/5/20 12:48
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // 就是判断左右子树是否相同
        if(!p || !q){
            return p==q;
        }
        return p->val == q->val && isSameTree(p->left, q->right) && isSameTree(p->right, q->left);

    }
    bool isSymmetric(TreeNode* root) {
        // 判断一棵树是否对称，需要它的左子树等于它的右子树
        return isSameTree(root->left, root->right);
    }
};

int main() {


    return 0;
}
