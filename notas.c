// Online C compiler to run C program online
#include <stdio.h>

int main() {
    /*
    A)
    
    int nota;
    printf("Informe  a nota: ");
    scanf("%d", &nota);
    if(nota >=6){
        printf("O aluno está aprovado");
    }else{
        printf("O aluno está reprovado");
    }
    */ 
    
    /*
    B)
    int nota1, nota2;
    float media;
    printf("Informe  a nota 1: ");
    scanf("%d", &nota1);
    printf("Informe  a nota 2: ");
    scanf("%d", &nota2);
    media = (nota1 + nota2)/2;
    
    if(media >=6){
        printf("O aluno está aprovado");
    }else{
        printf("O aluno está reprovado");
    }
    */
    
    /*
    C)
    
    int notas1[5] = {}, notas2[5] = {};
    float medias[5] = {}, maiormedia;
    for(int i = 0; i<5; i++){
        printf("\nInforme a primeira nota do %d aluno: ", i + 1);
        scanf("%d", &notas1[i]);
        printf("\nInforme a segunda nota do %d aluno: ", i + 1);
        scanf("%d", &notas2[i]);
        medias[i] = (notas1[i] + notas2[i])/2;
        if(medias[i] >=6){
          printf("O aluno está aprovado");
        } else{
          printf("O aluno está reprovado");
        }
    }
    */
    
    /*
    D)
    
    int notas1[5] = {}, notas2[5] = {};
    float medias[5] = {}, maiormedia;
    for(int i = 0; i<5; i++){
        printf("\nInforme a primeira nota do %dº aluno: ", i + 1);
        scanf("%d", &notas1[i]);
        printf("\nInforme a segunda nota do %dº aluno: ", i + 1);
        scanf("%d", &notas2[i]);
        medias[i] = (notas1[i] + notas2[i])/2;
        if(medias[i] >=6){
          printf("O aluno está aprovado");
        } else{
          printf("O aluno está reprovado");
        }
    
        if(i == 0){
            maiormedia = medias[i];
        }
        if(medias[i] > maiormedia){
            maiormedia = medias[i];
        }
        
        printf("A maior média é: %.2f", maiormedia);
    }
    */
    
    /*
    E)
    int notas1[5] = {}, notas2[5] = {};
    float medias[5] = {}, maiormedia;
    char nomes[5][64] = {};
    for(int i = 0; i<5; i++){
        printf("\nInforme o nome do %dº aluno: ", i + 1);
        scanf("%s", &nomes[i]);
        printf("\nInforme a primeira nota do %dº aluno: ", i + 1);
        scanf("%d", &notas1[i]);
        printf("\nInforme a segunda nota do %dº aluno: ", i + 1);
        scanf("%d", &notas2[i]);
        medias[i] = (notas1[i] + notas2[i])/2;
        if(medias[i] >=6){
          printf("\nO aluno está aprovado");
        } else{
          printf("\nO aluno está reprovado");
        }
    
        if(i == 0){
            maiormedia = medias[i];
        }
        if(medias[i] > maiormedia){
            maiormedia = medias[i];
        }
        
    }
    printf("\nA maior média é: %.2f", maiormedia);
    */
    
    /*
    F)
    int notas1[5] = {}, notas2[5] = {};
    float medias[5] = {}, maiormedia;
    char nomes[5][64] = {};
    for(int i = 0; i<5; i++){
        printf("\nInforme o nome do %dº aluno: ", i + 1);
        scanf("%s", &nomes[i]);
        printf("\nInforme a primeira nota do %dº aluno: ", i + 1);
        scanf("%d", &notas1[i]);
        printf("\nInforme a segunda nota do %dº aluno: ", i + 1);
        scanf("%d", &notas2[i]);
        medias[i] = (notas1[i] + notas2[i])/2;
        if(medias[i] >=6){
          printf("\nO aluno está aprovado");
        } else{
          printf("\nO aluno está reprovado");
        }
    
        if(i == 0){
            maiormedia = medias[i];
        }
        if(medias[i] > maiormedia){
            maiormedia = medias[i];
        }
    }
    printf("\nA maior média é: %.2f", maiormedia);
    printf("\nA primeira nota segundo aluno é %d", notas1[1]);
    */
    
    /*
    G)
    int notas1[5] = {}, notas2[5] = {};
    float medias[5] = {}, maiormedia;
    char nomes[5][64] = {};
    for(int i = 0; i<5; i++){
        printf("\nInforme o nome do %dº aluno: ", i + 1);
        scanf("%s", &nomes[i]);
        printf("\nInforme a primeira nota do %dº aluno: ", i + 1);
        scanf("%d", &notas1[i]);
        printf("\nInforme a segunda nota do %dº aluno: ", i + 1);
        scanf("%d", &notas2[i]);
        medias[i] = (notas1[i] + notas2[i])/2;
        if(medias[i] >=6){
          printf("\nO aluno está aprovado");
        } else{
          printf("\nO aluno está reprovado");
        }
    
        if(i == 0){
            maiormedia = medias[i];
        }
        if(medias[i] > maiormedia){
            maiormedia = medias[i];
        }
    }
    printf("\nA maior média é: %.2f", maiormedia);
    printf("\nA primeira nota segundo aluno é %d", notas1[1]);
    
    for(int j = 0; j<5; j++){
    printf("\nA primeira nota do %dº aluno é: %d", j + 1, notas1[j]);
    printf("\nA segunda nota do %dº aluno é: %d", j + 1, notas2[j]);
    printf("\nA média das notas do %dº aluno é: %f", j + 1, medias[j]);
    printf("\nO nome do %dº aluno é: %s", j + 1, nomes[j]);
    }
    */
    
    /*
    H)
    int notas1[5] = {}, notas2[5] = {}, indexdamaiormedia;
    float medias[5] = {}, maiormedia;
    char nomes[5][64] = {};
    for(int i = 0; i<5; i++){
        printf("\nInforme o nome do %dº aluno: ", i + 1);
        scanf("%s", &nomes[i]);
        printf("\nInforme a primeira nota do %dº aluno: ", i + 1);
        scanf("%d", &notas1[i]);
        printf("\nInforme a segunda nota do %dº aluno: ", i + 1);
        scanf("%d", &notas2[i]);
        medias[i] = (notas1[i] + notas2[i])/2;
        if(medias[i] >=6){
          printf("\nO aluno está aprovado");
        } else{
          printf("\nO aluno está reprovado");
        }
    
        if(i == 0){
            maiormedia = medias[i];
            indexdamaiormedia = i;
        }
        if(medias[i] > maiormedia){
            maiormedia = medias[i];
            indexdamaiormedia = i;
        }
    }
    printf("\nA maior média é: %.2f", maiormedia);
    printf("\nA primeira nota segundo aluno é %d", notas1[1]);
    
    for(int j = 0; j<5; j++){
    printf("\nA primeira nota do %dº aluno é: %d", j + 1, notas1[j]);
    printf("\nA segunda nota do %dº aluno é: %d", j + 1, notas2[j]);
    printf("\nA média das notas do %dº aluno é: %f", j + 1, medias[j]);
    printf("\nO nome do %dº aluno é: %s", j + 1, nomes[j]);
    }
    printf("\nO nome do aluno com maior média é: %s", nomes[indexdamaiormedia]);
    */
    
    /*
    I)
    int notas1[5] = {}, notas2[5] = {}, indexdamaiormedia;
    float medias[5] = {}, maiormedia;
    char nomes[5][64] = {};
    for(int i = 0; i<5; i++){
        printf("\nInforme o nome do %dº aluno: ", i + 1);
        scanf("%s", &nomes[i]);
        printf("\nInforme a primeira nota do %dº aluno: ", i + 1);
        scanf("%d", &notas1[i]);
        printf("\nInforme a segunda nota do %dº aluno: ", i + 1);
        scanf("%d", &notas2[i]);
        medias[i] = (notas1[i] + notas2[i])/2;
        if(medias[i] >=6){
          printf("\nO aluno está aprovado");
        } else{
          printf("\nO aluno está reprovado");
        }
    
        if(i == 0){
            maiormedia = medias[i];
            indexdamaiormedia = i;
        }
        if(medias[i] > maiormedia){
            maiormedia = medias[i];
            indexdamaiormedia = i;
        }
    }
    printf("\nA maior média é: %.2f", maiormedia);
    printf("\nA primeira nota segundo aluno é %d", notas1[1]);
    
    for(int j = 0; j<5; j++){
    printf("\nA primeira nota do %dº aluno é: %d", j + 1, notas1[j]);
    printf("\nA segunda nota do %dº aluno é: %d", j + 1, notas2[j]);
    printf("\nA média das notas do %dº aluno é: %f", j + 1, medias[j]);
    printf("\nO nome do %dº aluno é: %s", j + 1, nomes[j]);
    }
    printf("\nO nome do aluno com maior média é: %s", nomes[indexdamaiormedia]);
    if(nomes[0] == "Tati"){
        printf("O primeiro aluno se chama Tati!");
    } else{
        printf("O primeiro não aluno se chama Tati!");
    }
    */
    return 0;
}
