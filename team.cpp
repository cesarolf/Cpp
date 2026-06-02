#include <iostream>
using namespace std;

int main(){

    int n, probs = 0;

    cin >> n;

    while(n--){

        int aux, aux2 = 0;
        for ( int i = 0; i < 3; i++ ){
            cin >> aux;
            aux2 += aux;
        }
        if ( aux2 >= 2 ) probs++;
    }

    cout << probs << "\n";

    return 0;
}