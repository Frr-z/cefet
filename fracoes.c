#include <stdio.h>

void main(){
    int N;
    float Soma = 1;
    printf("\nInforme N: ");
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        Soma+=1.0/i;
        Soma--;
    }
    printf("\nA soma é de %f", Soma);
}