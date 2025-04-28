/**
 * Created by leiyang on 2025/2/27 20:00
 */
#include <bits/stdc++.h>
using namespace std;

struct Party{
    int partyid; //����id
    int parentid; // ���ײ���id ����Ǹ����ţ��򸸲���idΪ0
};

bool isValidTree(vector<Party> &vecParty) {
    // ��״�ṹû����ɢ�Ľڵ㣬ȫ����������
    // ��״�ṹ���ɻ�

    // ʹ���ֵ��¼ÿ��id����
    unordered_map<int, Party> parentMap;
    for (int i = 0; i < vecParty.size(); i++) {
        parentMap[vecParty[i].partyid] = vecParty[i];
    }

    // 1.�л���������Լ�֦�Ż�
    // 2.����Ǹ��ڵ㣬��ô����Ҫ�и��׽ڵ㣬�����ǲ����ڵĽڵ�
    for (int i = 0;i<vecParty.size();i++) {
        int parID = vecParty[i].parentid;

        unordered_set<int> paths;
        paths.clear();
        paths.insert(vecParty[i].partyid);

        while (parID !=0 ) {
            if (!parentMap.count(parID)) {
                // ���׽ڵ�ָ����һ�������ڽڵ�
                return false;
            }
            if (paths.count(parID)) {
                // ���ڻ�
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
