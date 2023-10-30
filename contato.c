#include <stdio.h>

void main() {
    char nome[61], email[61];
    int numero, opcao;
    
    do{
    printf("\nSelecione a operação:\n(1)- Cadastrar\n(2)- Alterar\n(3)- Consultar todos os dados\n(4)- Sair\nOpção: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Informe o nome do novo contato que deseja cadrastrar: ");
            scanf("%s", nome);
            printf("Informe o número de telefone que deseja cadrastrar +xx (xxx) xxxxx-xxxx: ");
            scanf("%d", &numero);
            printf("Informe o email do novo contato que deseja cadrastrar: ");
            scanf("%s", email);
            printf("\nContato salvo com sucesso!");
        break;
        
        case 2:
            int opcao2;
            printf("Informe o dado que gostaria de alterar\n(1)- Nome\n(2)- Número\n(3)- Email\n Opção: ");
                scanf("%d", &opcao2);
            switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email);
                break;
                printf("\nContato editado com sucesso!");
            }
        break;
        
        case 3: 
        printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome, numero, email);
        break;
        
        case 4: 
        printf("Adiós!");
        break;
    }
    }while(opcao != 4);
}
