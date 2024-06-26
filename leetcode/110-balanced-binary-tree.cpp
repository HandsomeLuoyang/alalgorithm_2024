/**
 * Created by leiyang on 2024/5/20 13:29
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
    bool isBalanced(TreeNode* root) {
        // 左右子树高度差不超过1
        return getHeight(root)!=-1;

    }
    int getHeight(TreeNode* root){
        if(!root) return 0;
        int left_height = getHeight(root->left);
        if (left_height==-1) return -1;
        int right_height = getHeight(root->right);
        if(right_height == -1) return -1;
        if(abs(left_height-right_height)>1) return -1;
        return max(left_height, right_height)+1;
    }

};


int main() {


    return 0;
}
