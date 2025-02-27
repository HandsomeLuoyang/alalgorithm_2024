/**
 * Created by leiyang on 2024/10/29 19:46
 */
#include <bits/stdc++.h>

using namespace std;

class TreeNode{
public:
    int val;
    int layer;
    vector<TreeNode*> children;

    TreeNode(int val):val(val){};

    void setChild(TreeNode* child){
        children.push_back(child);
        child->layer = this->layer + 1;
    };
};

int main() {
    int n;
    cin>>n;
    int value;
    // 制作一个根节点
    auto* root = new TreeNode(0);
    vector<TreeNode*> all_nodes(n+1, nullptr);
    vector<vector<TreeNode*>> layer_node(n+1);
    layer_node[0].push_back(root);
    vector<vector<int>> layer_max_min(n+1, {0, 1000000005});

    int cur_max = 0;
    int cur_min = 1e9+5;

    int max_layer = 0;

    root->layer = 0;
    for(int i = 1;i<=n;i++){
        cin>>value;
        cur_max = max(value, cur_max);
        cur_min = min(value, cur_min);
        auto* newNode = new TreeNode(value);
        all_nodes[i] = newNode;
    }
    root->setChild(all_nodes[1]);
    layer_node[1].push_back(all_nodes[1]);
    layer_max_min[1][0] = all_nodes[1]->val;
    layer_max_min[1][1] = all_nodes[1]->val;
    int a, b;
    for(int i = 0;i<n-1;i++){
        cin>>a>>b;
        all_nodes[a]->setChild(all_nodes[b]);
        layer_node[all_nodes[a]->layer+1].push_back(all_nodes[b]);
        max_layer = max(max_layer, all_nodes[b]->layer);
        layer_max_min[all_nodes[b]->layer][0] = max(layer_max_min[all_nodes[b]->layer][0], all_nodes[b]->val);
        layer_max_min[all_nodes[b]->layer][1] = min(layer_max_min[all_nodes[b]->layer][1], all_nodes[b]->val);
    }

    for(int i = 1;i<max_layer;i++){
        int new_max = layer_max_min[i][0] * 2
    }




    return 0;
}
