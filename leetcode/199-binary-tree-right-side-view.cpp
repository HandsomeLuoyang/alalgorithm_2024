/**
 * Created by leiyang on 2024/5/20 14:11
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
    vector<int> ans;
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return vector<int>{};
        find(root, 0);
        return ans;
    }
    void find(TreeNode* root, int height){
        // 优先找右边，带一个高度下去，如果当前的高度等于答案长度，代表这一层还没有答案，就可以加入，由于是优先找的右子树，所以符合题意
        if(!root) return;
        if(height == ans.size()) ans.push_back(root->val);
        if (root->right) find(root->right, height+1);
        if(root->left) find(root->left, height+1);
    }

};

int main() {


    return 0;
}
