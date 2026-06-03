#include <bits/stdc++.h>
using namespace std;

int main(){

    char teamF1[8], teamF2[4], teamF3[2];
    int aux = 0, aux2 = 0;
    int ctL=0;

    for ( int i = 0; i < 8; i++ ){

        cin >> aux >> aux2;
        if ( aux > aux2 ) teamF1[i] = 'A'+ctL;
        else teamF1[i] = 'A'+ctL+1;
        ctL +=2;
    }

    //for (char aux : teamF1) cout << aux << "\n";

    ctL = 0;
    for ( int i = 0; i < 4; i++ ){

        cin >> aux >> aux2;
        if ( aux > aux2 ) teamF2[i] = teamF1[ctL];
        else teamF2[i] = teamF1[ctL+1];
        ctL+=2;
    }

    
    //for (char aux : teamF2) cout << aux << "\n";

    ctL = 0;
    for ( int i = 0; i < 2; i++ ){

        cin >> aux >> aux2;
        if ( aux > aux2 ) teamF3[i] = teamF2[ctL];
        else teamF3[i] = teamF2[ctL+1];
        ctL+=2;
    }

    //for (char aux : teamF3) cout << aux << "\n";

    cin >> aux >> aux2;
    if ( aux > aux2 ) cout << teamF3[0];
    else cout << teamF3[1];

    return 0;
}