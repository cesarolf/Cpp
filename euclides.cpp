#include <iostream>
using namespace std;

int main(){

    int n;
    unsigned int x;
     
    cin >> n;

    while(n--){
        cin >> x;
        cout << ~x << '\n';
    }

    return 0;
}