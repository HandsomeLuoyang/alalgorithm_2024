/**
 * Created by leiyang on 2024/3/30 15:17
 */
#include <bits/stdc++.h>
using namespace std;

int guaiwu[100010]= {0};
// int boss[1e5+10] = {0};
vector<int> boss(100010, 1e9);
int result[100010] = {0};
int ok_guaiwu[100010] = {0};

// 拉链法解决索引问题
struct List {
    int val;
    List* next;
    List(int val, List*next):val(val), next(next){};
    List():val(0), next(nullptr){};
};

unordered_map<int,List*> umap;


int find_guaiwu(int cur_zhandouli, int l, int r, int guaiwu[]) {
    if(l+1==r ||  l==r) {
        // 判断是否已经打过
        if(ok_guaiwu[l]) {
            return find_guaiwu(cur_zhandouli, l-1, r-1, guaiwu);
        }
        return l;
    }
    int c_val = guaiwu[(l+r)>>1];
    if (c_val>=cur_zhandouli) return find_guaiwu(cur_zhandouli,l, (l+r)>>1, guaiwu);
    return find_guaiwu(cur_zhandouli, (l+r)>>1, r, guaiwu);
}


int main(){
    int p,n,m,temp;
    cin>>p>>n>>m;
    for(int i = 0;i<n;i++) {
        cin>>guaiwu[i];
    }
    for(int i = 0;i<m;i++) {
        cin>>temp;
        boss[i] = temp;
        // 做个头节点先，然后再插入到后面比较方便
        if(!umap.count(temp)) {
            List* node = new List(i, nullptr);
            List* pre = new List(0, node);
            umap[temp] = pre;
        }
        // 如果出现重复了
        else {
            List* node = new List(i, nullptr);
            List* cur = umap[temp];
            // 添加到末尾，因为索引是从小到大来的，所以这个链表默认有序
            while(cur->next) {
                cur = cur->next;
            }
            cur->next = node;
        }


    }
    sort(boss.begin(), boss.end());

    // 如果没有房间可以进，那么只能靠奖励房提升
    // 房间的奖励是从小到大排列，大于它即可获得它的奖励，那么如果奖励大于奖励房间，就进那个房间，贪心，永远选择提升最快的方法
    // boss房没有说单调递增，但是我们需要递增，因此要将其排序，并记录其刚开始的序号(这里需要考虑重复问题，先假设没有重复，做了再说)，方便输出
    int step = 0;
    int boss_num = 0;
    int guaiwu_num = 0; // 记录当前打到哪个怪物了
    int cur_zhandouli = p; // 记录当前的战斗力
    int jiangli; // 记录奖励房能带来多少战力加成
    while(boss_num<m) {
        // 没打完boss前不结束循环
        if(cur_zhandouli>boss[boss_num]) {
            // 能打过，记录
            // 记录并删除值为这个的umap中的所有节点
            List* cur = umap[boss[boss_num]]->next;
            int ok_boss = 0;
            while(cur) {
                result[cur->val] = step;
                cur = cur->next;
                ok_boss+=1;
            }
            umap.erase(boss[boss_num]);

            boss_num+=ok_boss;
            continue;
        }

        // 当前打不过，开始练习
        // 不一定要从最垃圾的怪物开始打，而是先从当前打得过的最牛逼的怪物开始打，因为有序，可以用二分查找，再用一个列表来记录已经打过的怪物
        int ok_guaiwu_idx =find_guaiwu(cur_zhandouli, 0, n, guaiwu);
        jiangli = cur_zhandouli/10;
        if (guaiwu[ok_guaiwu_idx]>jiangli) {
            cur_zhandouli+= guaiwu[ok_guaiwu_idx];
            ok_guaiwu[ok_guaiwu_idx] = 1;
            step++;
            continue;
        }
        cur_zhandouli += jiangli;

        step++;
    }
    for(int i = 0;i<m;i++) {
        cout<<result[i]<<endl;
    }

    
    return 0;
}
