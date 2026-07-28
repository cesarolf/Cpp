#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, k, c;
    bool flag, flag1;

    cin >> t;

    while(t--){

        cin >> k;

        flag1 = 0;
        flag = 0;

        while(k--){
            cin >> c;
            if (c > 2 || c > 1 && flag == 1 ) flag1 = 1;
            if (c > 1 ) flag = 1;
        }

        if (flag1) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}