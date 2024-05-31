/**
 * Created by leiyang on 2024/5/16 18:42
 */
#include <bits/stdc++.h>

using namespace std;

struct iter_freq{
    list<pair<int, int>>::iterator iter;
    int freq;
};


class LFUCache {
    /*
     * 双map实现LFU
     */
public:
    int capacity;
    int cur_size = 0;
    int min_freq = 1;
    unordered_map<int, list<pair<int, int>>> freq_mp;
    unordered_map<int, iter_freq> key_mp;

    LFUCache(int capacity):capacity(capacity) {
        // 默认添加一条freq=1的链表
        freq_mp[1] = list<pair<int, int>>();
    }

    int get(int key) {
        if (key_mp.count(key)){

            // 存在的情况下返回值并将其频率+1，移到频率+1的链表头去
            auto& item = key_mp[key];
            item.freq++;

            // 插入进去,如果一个值存在，其必然处于freq>=1的链表中，所以这里可以放放心-1
            freq_mp[item.freq].splice(freq_mp[item.freq].begin(), freq_mp[item.freq-1], item.iter);

            // 由于这里有值往上走，必须更新min_freq的值
            if (freq_mp[min_freq].empty()){
                min_freq++;
            }
            return item.iter->second;
        }
        return -1;
    }

    void put(int key, int value) {
        // 如果存在，那么更新，先更新值，然后get一次即可
        if(key_mp.count(key)){
            auto &item = key_mp[key];
            item.iter->second = value;
            this->get(key);
        }
        // 如果不存在
        else{
            // 先看是否占用满了需要删除值
            if(cur_size==capacity){
                // 从min_freq那条链表删除最后面的值
                auto &lst = freq_mp[min_freq];
                auto lst_pair = lst.rbegin();

                // 删除的步骤
                // 1.从key_mp中删除
                key_mp.erase(lst_pair->first);
                // 2.将其从链表中pop
                lst.pop_back();
                // 3.因为pop了，需要查看是否需要更新min_freq，但是由于后面会插入，所以直接不动，等插入的时候变成1就可以

                // 4.cur_size减少
                cur_size--;
            }
            // 这个时候直接添加就可以了
            // 先创建一个pair
            pair<int, int> _pair = pair<int, int> (key, value);
            // 默认freq为1，到1的最前面去
            freq_mp[1].push_front(_pair);
            // 将其和其迭代器一起放到结构体
            auto item = iter_freq();
            item.iter = freq_mp[1].begin();
            item.freq = 1;
            // 将结构体放到key_mp
            key_mp[key] = item;

//            key_mp[key].iter = freq_mp[1].begin();
//            key_mp[key].freq = 1;

            // size++
            cur_size++;
            // 将min_freq设置为1
            min_freq = 1;
        }
    }
};


int main() {
    LFUCache lfu = LFUCache(2);
    lfu.put(1, 1);   // cache=[1,_], cnt(1)=1
    lfu.put(2, 2);   // cache=[2,1], cnt(2)=1, cnt(1)=1
    lfu.get(1);      // 返回 1
    // cache=[1,2], cnt(2)=1, cnt(1)=2
    lfu.put(3, 3);   // 去除键 2 ，因为 cnt(2)=1 ，使用计数最小
    // cache=[3,1], cnt(3)=1, cnt(1)=2
    lfu.get(2);      // 返回 -1（未找到）
    lfu.get(3);      // 返回 3
    // cache=[3,1], cnt(3)=2, cnt(1)=2
    lfu.put(4, 4);   // 去除键 1 ，1 和 3 的 cnt 相同，但 1 最久未使用
    // cache=[4,3], cnt(4)=1, cnt(3)=2
    lfu.get(1);      // 返回 -1（未找到）
    lfu.get(3);      // 返回 3
    // cache=[3,4], cnt(4)=1, cnt(3)=3
    lfu.get(4);      // 返回 4
    // cache=[3,4], cnt(4)=2, cnt(3)=3
    return 0;
}
