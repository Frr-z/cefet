#include <stdio.h>

void main(){
    int MatrizDeBombas[10000] = {};

    int MatrizDeQuantidades[10000] = {};

    int N;
    printf("\nInforme o tamanho N do tabuleiro N x N: ");
    scanf("%d", &N);
    for(int x = 0; x < N; x++){
        for(int y = 0; y < N; y++){
            printf("\nInforme o valor na posição [%d][%d]", x, y);
            scanf("%d", &MatrizDeBombas[x + y]);
            if(MatrizDeBombas[x + y] = 1){
                MatrizDeQuantidades[x + y] += 1;
                MatrizDeQuantidades[x + y] += 1;
                MatrizDeQuantidades[x + y - 1] += 1;
                MatrizDeQuantidades[x + y - 1] += 1;
                MatrizDeQuantidades[x + y + N - 1] += 1;
                MatrizDeQuantidades[x + y + N + 1] += 1;
                MatrizDeQuantidades[x + y + N] += 1;
            }
        }
    }
}