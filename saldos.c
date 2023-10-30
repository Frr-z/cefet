#include <stdio.h>
#include <string.h>

int main() {
    /*
    1)
   int idades[10] = {};
   
   for(int i = 0; i<10; i++){
       printf("\nInforme a %dº idade: ", i + 1);
       scanf("%d", &idades[i]);
   }
   printf("\nA idade da 4º pessoa é: %d anos.", idades[3]);
   idades[6] = 18;
   idades[1] = idades[0];
   idades[4] *= idades[0];
   for(int j = 0; j<10; j++){
       printf("\nA %dº idade é: %d anos", j + 1, idades[j]);
   }
  */
  
  
  /*
  2)
   char nome1[64] = {}, nome2[64] = {};
   printf("\nInforme o primeiro nome: ");
   scanf("%s", &nome1);
   printf("\nInforme o segunda nome: ");
   scanf("%s", &nome2);
   if (strcmp(nome1, nome2) == 0) {
        printf("\nOs nomes são iguais");
   } else{
        printf("\nOs nomes são diferentes");
   }
   printf("\nNome 1: %s\nNome 2: %s\n", nome1, nome2);
   strcpy(n1, n2);
   printf("\nNome 1: %s\nNome 2: %s\n", nome1, nome2);
   */
   char nomes[10][64];
   int CPFs[10], Idades[10];
   float Saldos[10];
   
   for(int i=0; i<10; i++){
       printf("\nInforme o %dº nome: ", i+1);
       scanf("%s", nomes[i]);
       printf("\nInforme o %dº CPF: ", i+1);
       scanf("%d", &CPFs[i]);
       printf("\nInforme o %dº saldo: ", i+1);
       scanf("%f", &Saldos[i]);
   }
   
   if(Saldos[0] < 500){
       printf("\nSaldo insuficiente!");
       
   }else{
       Saldos[0]-=500;
       Saldos[4]+=500;
       printf("\nTransferência realizada com sucesso!");
   }
   
   Saldos[1]-=100;
   Saldos[6]+=100;
   
   if(Saldos[6] < 100){
       printf("\nO segundo perdeu seu money!");
   }else {
       printf("\nO sétimo pagou suas dívidas com o segundo!");
   }
   
    for(int j=0; j<10; j++){
       printf("\nO %dº nome: é %s", j+1, nomes[j]);
       printf("\nO %dº CPF: é %d", j+1, CPFs[j]);
       printf("\nA %dº idade: é %d", j+1, Idades[j]);
       printf("\nO %dº saldo: é %f", j+1, Saldos[j]);
   }
   
  return 0;
}
