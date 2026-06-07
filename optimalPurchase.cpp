#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n, students, aCost, bCost, priceA, priceB;

    cin >> n;

    while(n--){

        cin >> students >> aCost >> bCost;

        priceA = students * aCost;
        priceB = (students/3 *bCost);

        if ( students % 3 != 0 ){
            if ( students%3 * aCost <= bCost ) priceB += students%3 * aCost;
            else priceB += bCost;
        }
        
        if ( priceA <= priceB ) cout << priceA << "\n";
        else cout << priceB << "\n";
    }

    return 0;
}