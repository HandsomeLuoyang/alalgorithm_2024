#include <bits/stdc++.h>
using namespace std;

// �Զ���ȽϺ��������ھ������ֵ�����˳��
bool compare(const string &a, const string &b) {
    return a + b > b + a; // ��ƴ���������������ĸ�������и���
}
int main() {
    int n;
    cin >> n; // ��ȡ���ָ���
    vector<string> nums(n);
    // ��ȡ����Ԫ��
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    // ʹ���Զ���Ƚ϶��ַ�����������
    sort(nums.begin(), nums.end(), compare);
    // ƴ�������Ľ��
    string result;
    for (const string &num : nums) {
        result += num;
    }
    // ����ǰ��������
    if (result[0] == '0') {
        cout << "0"; // ��������λ���㣬���ս������0
    } else {
        cout << result; // �����������
    }
    return 0;
}
