/**
 * Created by leiyang on 2025/2/27 20:00
 */
#include <bits/stdc++.h>
using namespace std;

struct Party{
    int partyid; //部门id
    int parentid; // 父亲部门id 如果是根部门，则父部门id为0
};

bool isValidTree(vector<Party> &vecParty) {
    // 树状结构没有离散的节点，全部是相连的
    // 树状结构不成环

    // 使用字典记录每个id所在
    unordered_map<int, Party> parentMap;
    for (int i = 0; i < vecParty.size(); i++) {
        parentMap[vecParty[i].partyid] = vecParty[i];
    }

    // 1.判环，这里可以减枝优化
    // 2.如果非根节点，那么必须要有父亲节点，不能是不存在的节点
    for (int i = 0;i<vecParty.size();i++) {
        int parID = vecParty[i].parentid;

        unordered_set<int> paths;
        paths.clear();
        paths.insert(vecParty[i].partyid);

        while (parID !=0 ) {
            if (!parentMap.count(parID)) {
                // 父亲节点指向了一个不存在节点
                return false;
            }
            if (paths.count(parID)) {
                // 存在环
                return false;
            }
            paths.insert(parID);
            parID = parentMap[parID].partyid;
        }
    }
    return true;
}

int main(){
    return 0;
}
