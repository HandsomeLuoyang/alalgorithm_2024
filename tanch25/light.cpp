/**
 * Created by leiyang on 2024/6/2 15:10
 */
#include <bits/stdc++.h>
#include <chrono>

using namespace std;

typedef long long ll;

pair<ll,ll> ly(ll n, ll m, ll k){
    auto start = std::chrono::high_resolution_clock::now();
    string dire = "rt"; // 右上
    ll cur_x = 0, cur_y = 0;
    for(ll i = 0;i<=k;i++){
//        cout << cur_x << " " << cur_y << " " << dire << " " << endl;
        if(dire == "rt"){ // 右上
            if(n-cur_x<m-cur_y){
//                cur_y = n- cur_x;
                cur_y += n-cur_x;
                cur_x = n;
                dire = "lt";
            }
            else if(n-cur_x==m-cur_y){
                cur_x = n;
                cur_y = m;
                dire = "ld";
            }
            else{
                cur_x += m-cur_y;
                cur_y = m;
                dire = "rd";
            }
        }
        else if(dire == "lt"){ // 左上
            if(cur_x<m-cur_y){
                cur_y += cur_x;
                cur_x = 0;
                dire = "rt";
            }
            else if(cur_x == m-cur_y){
                cur_x = 0;
                cur_y = m;
                dire = "rd";
            }
            else{
                cur_x -= m-cur_y;
                cur_y = m;
                dire = "ld";
            }
        }
        else if(dire == "rd"){
            if(n-cur_x<cur_y){
                cur_y -= n-cur_x;
                cur_x = n;
                dire = "ld";
            }
            else if(n-cur_x==cur_y){
                cur_x = n;
                cur_y = 0;
                dire = "lt";
            }
            else{
                cur_x += cur_y;
                cur_y = 0;
                dire = "rt";
            }
        }
        else { // ld
            if(cur_x<cur_y){
                cur_y -= cur_x;
                cur_x = 0;
                dire = "rd";
            }
            else if(cur_x == cur_y){
                cur_x = 0;
                cur_y = 0;
                dire = "rt";
            }
            else{
                cur_x -= cur_y;
                cur_y = 0;
                dire = "lt";
            }
        }
    }
//    cout<<cur_x<<" "<<cur_y<<endl;
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    std::cout << "ly Function took " << elapsed.count() << " milliseconds." << std::endl;
    return make_pair(cur_x, cur_y);
}


pair<ll,ll> tc(ll n, ll m , ll k){
    auto start = std::chrono::high_resolution_clock::now();
    long long x = 0, y = 0;
    long long bx = n, by = m;
    int dx = 1, dy = 1;
    k += 1;
    while (k -- ) {
        //每次考虑对应的位置
        if (abs(bx - x) < abs(by - y)) {
            //x先到对应的位置
            y = y + dy * abs(bx - x);
            x = bx;
            if (dx == 1) {
                bx = 0;
            }
            else bx = n;
            dx *= -1;
            if (y == by) {
                if (dy == 1) {
                    by = 0;
                }
                else by = m;
                dy *= -1;
            }
        }
        else {
            x = x + dx * abs(by - y);
            y = by;
            if (dy == 1) {
                by = 0;
            }
            else by = m;
            dy *= -1;
            if (x == bx) {
                if (dx == 1) {
                    bx = 0;
                }
                else bx = n;
                dx *= -1;
            }
        }
    }
//    printf("%lld %lld \n",x, y);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    std::cout << "tc Function took " << elapsed.count() << " milliseconds." << std::endl;
    return make_pair(x, y);
}


int main() {
    ll n, m, k;
//    cin>>n>>m>>k; // 宽n高m
    while(1){
        ll n = rand()%1000000;
        ll m = rand()%1000000;
        ll k = rand()%1000000;
//        cout<<n<<" "<<m<<" "<<k<<endl;
        auto pair1 = ly(n, m, k);
        auto pair2 = tc(n, m, k);
        if(!(pair1.first == pair2.first && pair1.second == pair2.second)){
            cout<<"ly: "<<pair1.first<<" "<<pair1.second<<endl;
            cout<<"tc: "<<pair2.first<<" "<<pair2.second<<endl;
            break;
        }
    }
//    n = 2, m=9, k=5;
//    ly(2, 9, 5);
//    tc(2, 9, 5);

    return 0;
}
