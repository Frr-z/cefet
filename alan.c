#include <stdio.h>

int main() {
    
    /*
    int matrix[3][2] = {}, soma;
    printf("Informe os seis números: ");
    
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nA soma dos valores da primeira linha é: %d\n", matrix[0][0] + matrix[0][1]);
    printf("A média dos valores da segunda linha é: %d\n", (matrix[1][0] + matrix[1][1])/2);
    printf("O valor armazenado na segunda linha e na primeira coluna é: %d\n", matrix[1][0]);
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 2; j++){
            if(i == j){
                soma+=matrix[i][i];
            }
            if(matrix[i][j] == 35){
                printf("O número 35 foi encontrado na coluna %d linha %d\n", j, i);
                break;
            }else if(i == 2 && j == 1 && matrix[i][j] != 35){
                printf("O número 35 não existe na matriz\n");
            } 
        }
    }
     printf("A soma das diagonais principais é: %d", soma);
    */
    
    /*
    int matrix[2][4] = {0,0,0,0,0,0}, linha, coluna, linha1, coluna1;
    
    printf("\nInforme a coluna e a linha do prêmio, respectivamente: ");
    scanf("%d %d", &coluna, &linha);
    matrix[linha][coluna] = 10;
    printf("\nInforme a coluna e linha do prêmio, respectivamente: ");
    scanf("%d %d", &coluna1, &linha1);
    for(int i = 0; i < 3; i++){
        if(coluna1 == coluna && linha1 == linha){
            printf("Você ganhou!\n");
            break;
        }else{
            printf("Tente outra vez\n");
        }   
        if(i == 2){
            printf("Suas chances acabaram! Tente outro dia\n");
        }
    }
    */
    
    /*
    int matrix[4][4] = {}, SPrimeira, SSegunda;
    
    printf("\nInforme os números: ");
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &matrix[i][j]);
            
            if(i == j){
                SPrimeira += matrix[i][j];
            }
            if(i + j == 3){
                SSegunda += matrix[i][j];
            }
        }
    }
    printf("\nA diagonal principal é %d\nA diagonal secundária é %d!", SPrimeira, SSegunda);
    */
    
    return 0;
}
