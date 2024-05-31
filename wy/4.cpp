/**
 * Created by leiyang on 2024/3/30 16:25
 */
#include <bits/stdc++.h>
using namespace std;

struct person {
    // 每个成员
    int p_id;
    int t_id;
    int x;
    int y;
    int leave_fanhun;
    int is_youling;
    int anyuzhi;
    person():leave_fanhun(1), is_youling(0), anyuzhi(0){}; // 默认初始化这三个值
    person(int p_id, int t_id, int x, int y) {
        this->p_id = p_id;
        this->t_id = t_id;
        this->x = x;
        this->y = y;
        leave_fanhun = 1;
        is_youling = 0;
        anyuzhi = 0;
    };
};


vector<vector<person> > all_team;
unordered_map<int, person> person_map; // 迅速通过id找到人
unordered_map<int, vector<person>> team_map; // 迅速通过id找到team

vector<string> fenci(string s) {
    // 通过空格分词
    vector<string> ans;
    int i = 0,j = 0;
    while(j<s.length()) {
        if(s[j] == ' ') {
            ans.push_back(s.substr(i, j-i));
            j++;
            i=j;
        }
        else {
            j++;
        }
    }
}

int main(){
    int n, m;
    cin>>n;
    int p_id_1,p_id_2, p_id_3, t_id, x, y;
    while(n--) {
        cin>>p_id_1>>p_id_2>>p_id_3>>t_id>>x>>y;
        person p1(p_id_1, t_id, x, y);
        person p2(p_id_2, t_id, x, y);
        person p3(p_id_3, t_id, x, y);
        vector<person> team = {p1, p2, p3};
        all_team.push_back(team);

        person_map[p_id_1] = p1;
        person_map[p_id_2] = p2;
        person_map[p_id_3] = p3;
        team_map[t_id] = team;
    }
    cin>>m;
    string action;
    pair<int, int> zuoshang(0, 0), zuoxia(29, 0), youshang(0, 29), youxia(29, 29);
    int anyu_cishu = 0; // 暗域次数到达14次的时候，返魂花消失
    while(m--) {
        cin>>action;
        cout<<action;
        vector<string> r_fenci = fenci(action);
        for (auto basic_string : r_fenci) cout<<basic_string<<" ";
    }

    return 0;
}
