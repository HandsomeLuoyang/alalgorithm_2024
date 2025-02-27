#include <bits/stdc++.h>
using namespace std;

// 自定义比较函数，用于决定数字的排列顺序
bool compare(const string &a, const string &b) {
    return a + b > b + a; // 先拼接两个数，决定哪个组合排列更大
}
int main() {
    int n;
    cin >> n; // 读取数字个数
    vector<string> nums(n);
    // 读取数组元素
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    // 使用自定义比较对字符串进行排序
    sort(nums.begin(), nums.end(), compare);
    // 拼接排序后的结果
    string result;
    for (const string &num : nums) {
        result += num;
    }
    // 处理前导零的情况
    if (result[0] == '0') {
        cout << "0"; // 如果结果首位是零，最终结果就是0
    } else {
        cout << result; // 输出最大的数字
    }
    return 0;
}
