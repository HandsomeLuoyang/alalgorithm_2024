/**
 * Created by leiyang on 25-4-28 обнГ3:44
 */
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    string ss;
    cin>>ss;
    string ans;
    for (int i = ss.size()-1; i >= 0; i--) {
        ans += ss[i];
    }
    cout<<ans<<endl;
    return 0;
}
