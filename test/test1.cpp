#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

struct Node {
    int key;
    int value;
    int freq;
    Node(int k, int v, int f) : key(k), value(v), freq(f) {}
};

class LFUCache {
    int capacity;
    int min_freq;
    unordered_map<int, list<Node>::iterator> key_mp; // key -> node iterator
    unordered_map<int, list<Node>> freq_mp;          // freq -> nodes list

public:
    LFUCache(int capacity) : capacity(capacity), min_freq(0) {}

    int get(int key) {
        if (key_mp.find(key) == key_mp.end()) return -1;

        auto node = key_mp[key];
        int val = node->value;
        int freq = node->freq;

        freq_mp[freq].erase(node);
        if (freq_mp[freq].empty()) {
            freq_mp.erase(freq);
            if (min_freq == freq) min_freq++;
        }

        freq++;
        freq_mp[freq].emplace_front(key, val, freq);
        key_mp[key] = freq_mp[freq].begin();

        return val;
    }

    void put(int key, int value) {
        if (capacity == 0) return;

        if (key_mp.find(key) != key_mp.end()) {
            auto node = key_mp[key];
            int freq = node->freq;

            freq_mp[freq].erase(node);
            if (freq_mp[freq].empty()) {
                freq_mp.erase(freq);
                if (min_freq == freq) min_freq++;
            }

            freq++;
            freq_mp[freq].emplace_front(key, value, freq);
            key_mp[key] = freq_mp[freq].begin();
        } else {
            if (key_mp.size() == capacity) {
                auto it = freq_mp[min_freq].back();
                key_mp.erase(it.key);
                freq_mp[min_freq].pop_back();
                if (freq_mp[min_freq].empty()) {
                    freq_mp.erase(min_freq);
                }
            }

            min_freq = 1;
            freq_mp[1].emplace_front(key, value, 1);
            key_mp[key] = freq_mp[1].begin();
        }
    }
};

int main() {
    LFUCache lfu(2);
    lfu.put(1, 1);
    lfu.put(2, 2);
    cout << lfu.get(1) << endl;    // 返回 1
    lfu.put(3, 3);                 // 去除键 2
    cout << lfu.get(2) << endl;    // 返回 -1（未找到）
    cout << lfu.get(3) << endl;    // 返回 3
    lfu.put(4, 4);                 // 去除键 1
    cout << lfu.get(1) << endl;    // 返回 -1（未找到）
    cout << lfu.get(3) << endl;    // 返回 3
    cout << lfu.get(4) << endl;    // 返回 4
    return 0;
}
