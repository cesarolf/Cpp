#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 0, n;

    scanf("%d", &n);

    while(n--){
        char op;
        scanf("%*c%*c%c%*c", &op);
        if ( op == '+' ) x++;
        else if ( op == '-' ) x--;
    }

    printf("%d\n", x);

    return 0;
}