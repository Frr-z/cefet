#include <stdio.h>

int main() {
    float notas[5][2];
    char nomes[5][25];
    int i, j;
    for(i = 0; i<5; i++){
        printf("\nInforme o nome do %dº aluno: ", i + 1);
        __fpurge(stdin);
        gets(nomes[i]);
        for(j = 0; j<2; j++){
            printf("\nInforme a nota da %dº prova do %dº aluno: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }
    notas[2][1]=10;
    notas[4][0]=0;
    notas[4][1]=0;
    for(i = 0; i<5; i++){
        printf("\n\n>>> %s", nomes[i]);
        printf("\n");
        
        for(j = 0; j<2; j++){
            printf("\nA nota da %dº prova do %dº aluno é: %.1f pontos", j + 1, i + 1, notas[i][j]);
        }
    }

    return 0;
}
