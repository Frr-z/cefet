// Online C compiler to run C program online
#include <stdio.h>

void main() {
    // Write C code here
    float saldo;
    int opcao, numero, continuar = 1;
    printf("Informe o número da conta: ");
    scanf("%d", &numero);
    printf("Informe o saldo: ");
    scanf("%f", &saldo);
    
   do{
    printf("Selecione a operação: \n (1)- Fazer depósio\n (2)- Fazer saque\n (3)- Consultar saldo\n (4) Sair\n Opção: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1: 
        float deposito;
        printf("Informe o valor a ser depositado: ");
        scanf("%f", &deposito);
        if (deposito<0){
            printf("Você não pode depositar menos que R$0,00! ");
            break;
        } else{
                 saldo+=deposito;
        }
        break;
        case 2: 
        float valorasacar;
        int senha1, nmr1;
        printf("Informe a senha: ");
        scanf("%d", &senha1);
        printf("Informe o número da conta: ");
        scanf("%d", &nmr1);
        printf("Informe o valor a ser sacado: ");
        scanf("%f", &valorasacar);
        if (senha1 != 1357908642 || nmr1 != numero){
            printf("Você errou a senha ou o número do banco! ");
            break;
        } else {
         if (valorasacar > saldo){
            printf("Você não pode sacar mais do que você tem! ");
            break;
        } else{
            saldo-=valorasacar;
        }
        break;   
        }
        case 3:
        int senha2, nmr2;
        printf("Informe a senha: ");
        scanf("%d", &senha2);
        printf("Informe o número da conta: ");
        scanf("%d", &nmr2);
        
        if (senha2 != 1357908642 || nmr2 != numero){
            printf("Você errou a senha ou o número do banco! ");
            break;
        } else {
        printf("Seu saldo atual é de R$%.0f,00! ", saldo);
        break;
        case 4: 
        continuar = 0;
        break;
        }
    }
    if (continuar == 1){
      printf("\n Deseja continuar\n (1)- Sim\n (Outro)- Não\n Opção: ");
    scanf("%d", &continuar);   
    }
   }while (continuar==1);
   printf("\n Obrigado por usar nossos serviços! \n Volte sempre! \n -Banco do Deniel");
}
