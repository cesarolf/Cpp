#include <bits/stdc++.h>
using namespace std;

int main(){

    int reps, n, md, bg, sml;
    vector <int> slime;

    cin >> reps;

    while(reps--){

        cin >> n;

        slime.resize(n);
        for (int i = 0; i < n; i++ ) cin >> slime[i];

        bg = slime[0];
        sml = slime[0];
        for ( int i : slime ){
            if ( i < sml ) sml = i;
            if ( i > bg ) bg = i;
        }

        md = ( bg + sml ) /2;

        cout<< bg - md << "\n";
    }

    return 0;
}