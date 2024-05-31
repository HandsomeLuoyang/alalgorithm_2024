/**
 * Created by leiyang on 2024/4/2 11:21
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
    vector<TreeNode*> result;
    vector<TreeNode*> allPossibleFBT(int n) {
        auto* node = new TreeNode();
        if (n == 1){
            result.push_back(node);
            return result;
        }
        // 根节点左右要么是0，要么是一个奇数，因为每个孩子必须有0或者2个节点，然后左右子节点本身必须占一个
        // 对左右的个数进行遍历然后在dfs的边界那里加入答案
        // 如果是偶数个节点的话，是不可能的，直接返回
        if (n%2 == 0) return result;



    }

    void dfs(int& n, TreeNode* root, TreeNode* node){
        if (n == 0)
            result.push_back(copyTree(root));
        else{
            // 此时n至少大于1
            int temp = n;
            for(int i = 1;i<n-1;i+=2){
                n-=i;
                auto* newNode_l = new TreeNode(0);
                node->left = newNode_l;
                dfs(n, root, node->left);
                n = i;
                auto* newNode_r = new TreeNode(0);
                node->right= newNode_r;
                dfs(n, root, node->right);
                // 回溯
                n = temp;

            }
        }
    }

    TreeNode* copyTree(TreeNode* node){
        if(!node) return nullptr;
        auto* new_node = new TreeNode(node->val);
        new_node->left = copyTree(node->left);
        new_node->right = copyTree(node->right);
    }

};

int main() {


    return 0;
}
