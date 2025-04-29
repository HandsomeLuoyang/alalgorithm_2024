/**
 * Created by leiyang on 25-4-28 下午3:49
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, x;
    cin>>s>>x;
    int cost = 10;
    cost += s/x + (s%x!=0); // int 除法永远向下取整
    int cost_hour = cost/60;
    int all_time;
    int ans_hour;
    int ans_minutes;
    if (cost_hour>=8) {
        all_time = 32*60;
    }
    else { // cost_hour<8
        all_time = 8*60;
    }
    ans_hour = (all_time-cost)/60;
    ans_hour = ans_hour%24;
    ans_minutes = (all_time-cost)%60;
    printf("%02d:%02d\n", ans_hour, ans_minutes);
    return 0;
}
