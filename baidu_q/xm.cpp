#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

//

using namespace std;

// 检查是否可以组成有效的时间（24小时制）
bool isValidTime(int h1, int h2, int m1, int m2, int s1, int s2) {
    int hours = h1 * 10 + h2;
    int minutes = m1 * 10 + m2;
    int seconds = s1 * 10 + s2;
    return (hours >= 0 && hours < 24) && (minutes >= 0 && minutes < 60) && (seconds >= 0 && seconds < 60);
}

// 使用回溯法生成所有可能的时间组合并检查其有效性
void backtrack(vector<int>& digits, vector<bool>& used, string currentTime, set<string>& validTimes) {
    if (currentTime.size() == 6) {  // 当前时间格式为h1h2m1m2s1s2
        int h1 = currentTime[0] - '0';
        int h2 = currentTime[1] - '0';
        int m1 = currentTime[2] - '0';
        int m2 = currentTime[3] - '0';
        int s1 = currentTime[4] - '0';
        int s2 = currentTime[5] - '0';

        if (isValidTime(h1, h2, m1, m2, s1, s2)) {
            // 将时间格式化为 "hh:mm:ss" 格式并插入到集合中去重
            string timeStr = currentTime.substr(0, 2) + ":" + currentTime.substr(2, 2) + ":" + currentTime.substr(4, 2);
            validTimes.insert(timeStr);
            cout<<timeStr<<endl;
        }
        return;
    }

    // 回溯生成组合
    for (int i = 0; i < 6; ++i) {
        if (used[i]) continue;
        used[i] = true;
        backtrack(digits, used, currentTime + to_string(digits[i]), validTimes);
        used[i] = false;
    }
}

// 主函数，计算有效的时间组合数量
int countValidTimes(vector<int>& digits) {
    set<string> validTimes;  // 用于存储有效时间组合，自动去重
    vector<bool> used(6, false);
    backtrack(digits, used, "", validTimes);
    return validTimes.size();
}

int main() {
    vector<int> digits = {1, 2, 3, 4, 5, 6};  // 示例输入，可以包含重复数字
//    vector<int> digits = {1,1,1,1,1,1};  // 示例输入，可以包含重复数字
    int count = countValidTimes(digits);
    cout << "valid count: " << count << endl;
    return 0;
}

// 123456      答案：96
// 111111      答案：1
// 666666      答案：0