#include <iostream>
using namespace std;

int main(){

    int weight;

    cin >> weight;

    if ( weight % 2 == 0 && weight > 2 ) cout << "YES\n";
    else cout << "NO\n";

    /*for ( int i = 2; i < weight; i++ ){

        if ((weight / i) % 2 == 0){
            
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    */
    return 0;
}