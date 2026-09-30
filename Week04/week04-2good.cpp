///week04-2good.cpp 用進階c++迴圈
///在codeblocks有錯
#include <vector>
#include <iostream>
using namespace std;
int main ()
{
    vector<int> a;
    int now;
    for (int i=0; i<20;i++){
        cin >> now ;
        if (now==0) break;
        a.push_back(now);
    }
    cin >> now;
    int ans = 0;
    for (int num :a){ ///在codeblock 設定出錯
        if (num==now) ans++;
    }
    cout << ans << "\n";
}
