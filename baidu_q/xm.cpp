#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

//

using namespace std;

// ����Ƿ���������Ч��ʱ�䣨24Сʱ�ƣ�
bool isValidTime(int h1, int h2, int m1, int m2, int s1, int s2) {
    int hours = h1 * 10 + h2;
    int minutes = m1 * 10 + m2;
    int seconds = s1 * 10 + s2;
    return (hours >= 0 && hours < 24) && (minutes >= 0 && minutes < 60) && (seconds >= 0 && seconds < 60);
}

// ʹ�û��ݷ��������п��ܵ�ʱ����ϲ��������Ч��
void backtrack(vector<int>& digits, vector<bool>& used, string currentTime, set<string>& validTimes) {
    if (currentTime.size() == 6) {  // ��ǰʱ���ʽΪh1h2m1m2s1s2
        int h1 = currentTime[0] - '0';
        int h2 = currentTime[1] - '0';
        int m1 = currentTime[2] - '0';
        int m2 = currentTime[3] - '0';
        int s1 = currentTime[4] - '0';
        int s2 = currentTime[5] - '0';

        if (isValidTime(h1, h2, m1, m2, s1, s2)) {
            // ��ʱ���ʽ��Ϊ "hh:mm:ss" ��ʽ�����뵽������ȥ��
            string timeStr = currentTime.substr(0, 2) + ":" + currentTime.substr(2, 2) + ":" + currentTime.substr(4, 2);
            validTimes.insert(timeStr);
            cout<<timeStr<<endl;
        }
        return;
    }

    // �����������
    for (int i = 0; i < 6; ++i) {
        if (used[i]) continue;
        used[i] = true;
        backtrack(digits, used, currentTime + to_string(digits[i]), validTimes);
        used[i] = false;
    }
}

// ��������������Ч��ʱ���������
int countValidTimes(vector<int>& digits) {
    set<string> validTimes;  // ���ڴ洢��Чʱ����ϣ��Զ�ȥ��
    vector<bool> used(6, false);
    backtrack(digits, used, "", validTimes);
    return validTimes.size();
}

int main() {
    vector<int> digits = {1, 2, 3, 4, 5, 6};  // ʾ�����룬���԰����ظ�����
//    vector<int> digits = {1,1,1,1,1,1};  // ʾ�����룬���԰����ظ�����
    int count = countValidTimes(digits);
    cout << "valid count: " << count << endl;
    return 0;
}

// 123456      �𰸣�96
// 111111      �𰸣�1
// 666666      �𰸣�0