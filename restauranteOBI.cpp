#include <bits/stdc++.h>
using namespace std;

int main(){

    int g1, g2, g3, g4, qtd = 0;
    int flag = 0;

    cin >> g1 >> g2 >> g3 >> g4;

    if ( g4 ) qtd += g4;

    if ( g2 % 2 ){
        qtd += g2/2;
        g2 = 1;
        flag = 1;
    } else qtd += g2/2;

    qtd += g3;
    g1 -= g3;

    if ( g1 > 0 && flag ){
        qtd++;
        g1 -=2;
    } 

    if ( g1 > 0 ){
        qtd += g1 /4;
        if ( g1 % 4 ) qtd++;
    }

    cout << qtd << "\n";

    return 0;
}