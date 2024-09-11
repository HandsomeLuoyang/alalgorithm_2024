/**
 * Created by leiyang on 2024/8/28 19:14
 */
#include <bits/stdc++.h>

using namespace std;

void print(const vector<int>& nums){
    for (auto n:nums){
        cout<<n<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> nums1(n, 0);
    vector<int> nums2(n, 0);
    int temp ;
    for(int i = 0;i<n;i++){
        cin>>temp;
        nums1[i] = temp;
    }
    for(int i = 0;i<n;i++){
        cin>>temp;
        nums2[i] = temp;
    }
    vector<int> diff1(n-1, 0);
    vector<int> diff2(n-1, 0);
    for(int i=1;i<n;i++){
        diff1[i-1] = nums1[i] - nums1[i-1];
        diff2[i-1] = nums2[i] - nums2[i-1];
    }
//    print(diff1);
//    cout<<endl;
//    print(diff2);
    int ans = 0;
    int temp_length = 0;
    for(int i=0;i<n-1;i++){
        if(diff1[i] == diff2[i]){
            temp_length++;
            ans = max(ans, temp_length);
        } else{
            temp_length = 0;
        }
    }
    ans += 1;
    cout<<ans<<endl;
    return 0;
}

/*

5
1 2 3 1 3
-1 0 3 -1 1

5
1 2 3 4 5
-2 -1 0 1 2
 */