/**
 * Created by leiyang on 2024/10/12 18:59
 */
#include <bits/stdc++.h>

using namespace std;


int check(int num){
    int flag = 0;
    int ans = 0;
    while(num>0){
        int now = num%10;
        if (now%2 == 1){
            flag = 1;
        }
        ans +=now;
        num/=10;
    }
    if (ans%2==0) return flag;
    return 0;
}

void solve(){
    int n ;
    cin>>n;
    int ans=0;
    int temp;
    for(int i = 1;i<=n;i++){
        cin>>temp;
        ans += check(temp);
    }
    cout<<ans;
}

int main() {
    solve();
    return 0;
}
