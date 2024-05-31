/**
 * Created by leiyang on 2024/4/13 19:26
 */
#include <bits/stdc++.h>

using namespace std;

struct tree{
    char color;
    vector<tree*> children; // 树的子节点列表
};

int ans = 0;

/*
7
RBRBBRR
1 2
1 3
1 4
3 5
3 6
3 7
 */

char helper(tree* root){
    int flag = 0;
    for(int i = 0;i<root->children.size();i++){
        // 判断子树返回值，如果子树已经满足条件，用O来作为满足条件的char，那么根节点直接满足
        // 如果子树不满足，那必然只有一个颜色，查看当前颜色和返回的颜色是否相同，不同的话，当前也满足条件了
        char c = helper(root->children[i]);
        if(c!=root->color){
            if(flag == 0) {
                ans += 1;
            }
            flag = 1;
        }
    }
    if (flag) return 'O';
    return root->color;
}

int main() {
    int n;
    cin>>n;
    string colors;
    cin>>colors;
    vector<tree> trees(n+1, tree()); // 索引从1开始
    for(int i = 1;i<n+1;i++) {
        trees[i].color = colors[i - 1]; // 将颜色初始化
    }

    // 构造这棵树，然后用递归的方法就可以了
    for(int i = 0;i<n-1;i++){
        int father, son;
        cin>>father>>son;
        trees[father].children.push_back(&trees[son]); // 父树指向子树
    }
    helper(&trees[1]);
    cout<<ans<<endl;
    return 0;
}
