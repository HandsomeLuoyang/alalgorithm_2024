/**
 * Created by leiyang on 2024/5/20 14:30
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
    long long pre = INT64_MIN;
    bool isValidBST(TreeNode* root) {
        return helper_z(root);
    }

    // 对每个值都有一个区间限定，带着这个区间递归
    // 前序遍历做法
    bool helper(TreeNode* root, long long left=INT64_MIN, long long right=INT64_MAX){
        if(!root) return true;
        return root->val>left&&root->val<right && helper(root->left, left, root->val) && helper(root->right, root->val, right);
    }

    // 中序做法
    bool helper_z(TreeNode* root){
        if(!root) return true;
        if (!helper_z(root->left)){
            return false;
        }
        if(pre>=root->val){
            return false;
        }
        pre = root->val;
        return isValidBST(root->right);

    }
};


int main() {


    return 0;
}
