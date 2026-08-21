#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 6, v = 0;
    char x;

    while(n--){
        cin >> x;
        if ( x == 'V' ) v++;
    }

    if ( v > 4 ) cout << 1;
    else if ( v > 2 ) cout << 2;
    else if ( v > 0 ) cout << 3;
    else cout << -1;

    return 0;
}