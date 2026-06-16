#include <bits/stdc++.h>
using namespace std;

int main(){

    int reps, n, x, y, z, h1, h2, n2, ct;

    cin >> reps;

    while(reps--){

        cin >> n >> x >> y >> z;

        h1 = 0;
        h2 = 0;
        n2 = 0;
        while ( n2 < n ){
            h1++;
            n2 += x;
            n2 += y;
        }

        n2 = 0;
        ct = 0;
        while ( n2 < n ){
            if ( ct >= z ) n2 += 10 * y;
            else ct++;
            n2 += x;
            h2++;
        }

        if ( h1 > h2 ) cout << h2 << "\n";
        else cout << h1 << "\n";
    }

    return 0;
}