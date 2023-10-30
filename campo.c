#include <stdio.h>

void main(){
    int X, Y, Soma;
    printf("\nInforme X e Y, respectivamente: ");
    scanf("%d%d", &X, &Y);
    for(int i = X; i <= Y; i++){
        if(i % 13 != 0){
            Soma+=i;
        }
    }
    printf("\nA soma é de %d.", Soma);
}