/**
 * Created by leiyang on 2024/8/28 19:14
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin>>n>>m;
    // �ҵ�������֮��Ϊm����ΧΪ[0,n]�����ڣ������������ظ����Ǿ��ҵ����ظ��ĵĳ���3�Ϳ���
    // ����һ�������������x=y=z�������жϣ����ﱣ֤i,j������ͬ��k������i��j��ͬ�������Ͷ��ǿ��Գ�����
    // ����ѭ��
    unsigned long long ans = 0;
    for(int i = 0;i<n;i++)
        for(int j=i;j<n;j++){
            int need = m-i-j;
            if(need>=j&&need<=n){
                cout<<i<<" "<<j<<" "<<need<<endl;
                if (i==j&&j==need) ans+=1;
                else ans += 3;
            }
        }
    cout<<ans<<endl;
    return 0;
}
