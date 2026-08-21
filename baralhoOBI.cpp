#include <bits/stdc++.h>
using namespace std;

int main(){

    int carta, faltas;
    char naipe;
    bool flag;
    vector<int> baralho(52);

    while ( scanf("%d%c", &carta, &naipe) != EOF ){

        if ( naipe == 'C' ) baralho[carta-1]++;
        else if ( naipe == 'E' ) baralho[(carta-1)+13]++;
        else if ( naipe == 'U' ) baralho[(carta-1)+26]++;
        else if ( naipe == 'P' ) baralho[(carta-1)+39]++;
    }

    faltas = 0;
    flag = 1;
    for ( int i = 0; i < 13; i++){
        if ( baralho[i] == 0 ) faltas++;
        if ( baralho[i] > 1 ){
            printf("erro\n");
            flag = 0;
            break;
        }
    }
    if ( flag ) printf("%d\n", faltas);
    
    faltas = 0;
    flag = 1;
    for ( int i = 13; i < 26; i++){
        if ( baralho[i] == 0 ) faltas++;
        if ( baralho[i] > 1 ){
            printf("erro\n");
            flag = 0;
            break;
        }
    }
    if ( flag ) printf("%d\n", faltas);

    faltas = 0;
    flag = 1;
    for ( int i = 26; i < 39; i++){
        if ( baralho[i] == 0 ) faltas++;
        if ( baralho[i] > 1 ){
            printf("erro\n");
            flag = 0;
            break;
        }
    }
    if ( flag ) printf("%d\n", faltas);

    faltas = 0;
    flag = 1;
    for ( int i = 39; i < 52; i++){
        if ( baralho[i] == 0 ) faltas++;
        if ( baralho[i] > 1 ){
            printf("erro\n");
            flag = 0;
            break;
        }
    }
    if ( flag ) printf("%d\n", faltas);

    return 0;
}