#include <stdio.h>

void main() {
    char nome1[61], nome2[61], nome3[61], email1[61], email2[61], email3[61];
    int numero1, numero2, numero3, opcao10, opcao20, opcao30;
    
    
    printf("\nSelecione a operação:\n(1)- Cadastrar\n(2)- Alterar\n(3)- Consultar todos os dados\n(4)- Sair\nOpção: ");
    scanf("%d", &opcao10);
    switch(opcao10){
        case 1:
            printf("Informe o nome do novo contato que deseja cadrastrar: ");
            scanf("%s", nome1);
            printf("Informe o número de telefone que deseja cadrastrar +xx (xxx) xxxxx-xxxx: ");
            scanf("%d", &numero1);
            printf("Informe o email do novo contato que deseja cadrastrar: ");
            scanf("%s", email1);
            printf("\nContato salvo com sucesso!");
        break;
        
        case 2:
            int opcao2, opcao3;
            printf("Informe o contato que deseja alterar: 1, 2 ou 3 ");
            scanf("%d", &opcao3);
            printf("Informe o dado que gostaria de alterar\n(1)- Nome\n(2)- Número\n(3)- Email\n Opção: ");
                scanf("%d", &opcao2);
            switch(opcao3){
                case 1: 
                switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome1);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero1);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email1);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 2:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome2);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero2);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email2);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 3:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome3);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero3);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email3);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
            }
        break;
        
        case 3: 
        int opcao4;
        printf("Informe o contato que gostaria de consultar: ");
        scanf("%d", &opcao4);
        switch(opcao4){
            case 1: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome1, numero1, email1);
            break;
            
            case 2: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome2, numero2, email2);
            break;
            
            case 3: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome3, numero3, email3);
            break;
        }
        break;
        
        case 4: 
        printf("Adiós!");
        break;
    }
    printf("\nSelecione a operação:\n(1)- Cadastrar\n(2)- Alterar\n(3)- Consultar todos os dados\n(4)- Sair\nOpção: ");
    scanf("%d", &opcao20);
    
    switch(opcao20){
        case 1:
            printf("Informe o nome do novo contato que deseja cadrastrar: ");
            scanf("%s", nome2);
            printf("Informe o número de telefone que deseja cadrastrar +xx (xxx) xxxxx-xxxx: ");
            scanf("%d", &numero2);
            printf("Informe o email do novo contato que deseja cadrastrar: ");
            scanf("%s", email2);
            printf("\nContato salvo com sucesso!");
        break;
        
        case 2:
            int opcao2, opcao3;
            printf("Informe o contato que deseja alterar: 1, 2 ou 3 ");
            scanf("%d", &opcao3);
            printf("Informe o dado que gostaria de alterar\n(1)- Nome\n(2)- Número\n(3)- Email\n Opção: ");
                scanf("%d", &opcao2);
            switch(opcao3){
                case 1: 
                switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome1);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero1);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email1);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 2:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome2);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero2);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email2);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 3:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome3);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero3);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email3);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
            }
        break;
        
        case 3: 
        int opcao4;
        printf("Informe o contato que gostaria de consultar: ");
        scanf("%d", &opcao4);
        switch(opcao4){
            case 1: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome1, numero1, email1);
            break;
            
            case 2: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome2, numero2, email2);
            break;
            
            case 3: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome3, numero3, email3);
            break;
        }
        break;
        
        case 4: 
        printf("Adiós!");
        break;
    }
    
    printf("\nSelecione a operação:\n(1)- Cadastrar\n(2)- Alterar\n(3)- Consultar todos os dados\n(4)- Sair\nOpção: ");
    scanf("%d", &opcao30);
    switch(opcao30){
        case 1:
            printf("Informe o nome do novo contato que deseja cadrastrar: ");
            scanf("%s", nome3);
            printf("Informe o número de telefone que deseja cadrastrar +xx (xxx) xxxxx-xxxx: ");
            scanf("%d", &numero3);
            printf("Informe o email do novo contato que deseja cadrastrar: ");
            scanf("%s", email3);
            printf("\nContato salvo com sucesso!");
        break;
        
        case 2:
            int opcao2, opcao3;
            printf("Informe o contato que deseja alterar: 1, 2 ou 3 ");
            scanf("%d", &opcao3);
            printf("Informe o dado que gostaria de alterar\n(1)- Nome\n(2)- Número\n(3)- Email\n Opção: ");
                scanf("%d", &opcao2);
            switch(opcao3){
                case 1: 
                switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome1);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero1);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email1);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 2:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome2);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero2);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email2);
                break;#include <stdio.h>

void main() {
    char nome1[61], nome2[61], nome3[61], email1[61], email2[61], email3[61];
    int numero1, numero2, numero3, opcao10, opcao20, opcao30;
    
    
    printf("\nSelecione a operação:\n(1)- Cadastrar\n(2)- Alterar\n(3)- Consultar todos os dados\n(4)- Sair\nOpção: ");
    scanf("%d", &opcao10);
    switch(opcao10){
        case 1:
            printf("Informe o nome do novo contato que deseja cadrastrar: ");
            scanf("%s", nome1);
            printf("Informe o número de telefone que deseja cadrastrar +xx (xxx) xxxxx-xxxx: ");
            scanf("%d", &numero1);
            printf("Informe o email do novo contato que deseja cadrastrar: ");
            scanf("%s", email1);
            printf("\nContato salvo com sucesso!");
        break;
        
        case 2:
            int opcao2, opcao3;
            printf("Informe o contato que deseja alterar: 1, 2 ou 3 ");
            scanf("%d", &opcao3);
            printf("Informe o dado que gostaria de alterar\n(1)- Nome\n(2)- Número\n(3)- Email\n Opção: ");
                scanf("%d", &opcao2);
            switch(opcao3){
                case 1: 
                switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome1);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero1);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email1);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 2:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome2);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero2);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email2);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 3:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome3);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero3);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email3);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
            }
        break;
        
        case 3: 
        int opcao4;
        printf("Informe o contato que gostaria de consultar: ");
        scanf("%d", &opcao4);
        switch(opcao4){
            case 1: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome1, numero1, email1);
            break;
            
            case 2: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome2, numero2, email2);
            break;
            
            case 3: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome3, numero3, email3);
            break;
        }
        break;
        
        case 4: 
        printf("Adiós!");
        break;
    }
    printf("\nSelecione a operação:\n(1)- Cadastrar\n(2)- Alterar\n(3)- Consultar todos os dados\n(4)- Sair\nOpção: ");
    scanf("%d", &opcao20);
    
    switch(opcao20){
        case 1:
            printf("Informe o nome do novo contato que deseja cadrastrar: ");
            scanf("%s", nome2);
            printf("Informe o número de telefone que deseja cadrastrar +xx (xxx) xxxxx-xxxx: ");
            scanf("%d", &numero2);
            printf("Informe o email do novo contato que deseja cadrastrar: ");
            scanf("%s", email2);
            printf("\nContato salvo com sucesso!");
        break;
        
        case 2:
            int opcao2, opcao3;
            printf("Informe o contato que deseja alterar: 1, 2 ou 3 ");
            scanf("%d", &opcao3);
            printf("Informe o dado que gostaria de alterar\n(1)- Nome\n(2)- Número\n(3)- Email\n Opção: ");
                scanf("%d", &opcao2);
            switch(opcao3){
                case 1: 
                switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome1);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero1);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email1);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 2:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome2);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero2);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email2);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 3:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome3);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero3);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email3);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
            }
        break;
        #include <stdio.h>

void main() {
    char nome1[61], nome2[61], nome3[61], email1[61], email2[61], email3[61];
    int numero1, numero2, numero3, opcao10, opcao20, opcao30;
    
    
    printf("\nSelecione a operação:\n(1)- Cadastrar\n(2)- Alterar\n(3)- Consultar todos os dados\n(4)- Sair\nOpção: ");
    scanf("%d", &opcao10);
    switch(opcao10){
        case 1:
            printf("Informe o nome do novo contato que deseja cadrastrar: ");
            scanf("%s", nome1);
            printf("Informe o número de telefone que deseja cadrastrar +xx (xxx) xxxxx-xxxx: ");
            scanf("%d", &numero1);
            printf("Informe o email do novo contato que deseja cadrastrar: ");
            scanf("%s", email1);
            printf("\nContato salvo com sucesso!");
        break;
        
        case 2:
            int opcao2, opcao3;
            printf("Informe o contato que deseja alterar: 1, 2 ou 3 ");
            scanf("%d", &opcao3);
            printf("Informe o dado que gostaria de alterar\n(1)- Nome\n(2)- Número\n(3)- Email\n Opção: ");
                scanf("%d", &opcao2);
            switch(opcao3){
                case 1: 
                switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome1);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero1);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email1);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 2:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome2);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero2);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email2);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 3:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome3);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero3);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email3);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
            }
        break;
        
        case 3: 
        int opcao4;
        printf("Informe o contato que gostaria de consultar: ");
        scanf("%d", &opcao4);
        switch(opcao4){
            case 1: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome1, numero1, email1);
            break;
            
            case 2: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome2, numero2, email2);
            break;
            
            case 3: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome3, numero3, email3);
            break;
        }
        break;
        
        case 4: 
        printf("Adiós!");
        break;
    }
    printf("\nSelecione a operação:\n(1)- Cadastrar\n(2)- Alterar\n(3)- Consultar todos os dados\n(4)- Sair\nOpção: ");
    scanf("%d", &opcao20);
    
    switch(opcao20){
        case 1:
            printf("Informe o nome do novo contato que deseja cadrastrar: ");
            scanf("%s", nome2);
            printf("Informe o número de telefone que deseja cadrastrar +xx (xxx) xxxxx-xxxx: ");
            scanf("%d", &numero2);
            printf("Informe o email do novo contato que deseja cadrastrar: ");
            scanf("%s", email2);
            printf("\nContato salvo com sucesso!");
        break;
        
        case 2:
            int opcao2, opcao3;
            printf("Informe o contato que deseja alterar: 1, 2 ou 3 ");
            scanf("%d", &opcao3);
            printf("Informe o dado que gostaria de alterar\n(1)- Nome\n(2)- Número\n(3)- Email\n Opção: ");
                scanf("%d", &opcao2);
            switch(opcao3){
                case 1: 
                switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome1);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero1);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email1);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 2:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome2);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero2);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email2);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 3:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome3);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero3);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email3);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
            }
        break;
        
        case 3: 
        int opcao4;
        printf("Informe o contato que gostaria de consultar: ");
        scanf("%d", &opcao4);
        switch(opcao4){
            case 1: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome1, numero1, email1);
            break;
            
            case 2: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome2, numero2, email2);
            break;
            
            case 3: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome3, numero3, email3);
            break;
        }
        break;
        
        case 4: 
        printf("Adiós!");
        break;
    }
    
    printf("\nSelecione a operação:\n(1)- Cadastrar\n(2)- Alterar\n(3)- Consultar todos os dados\n(4)- Sair\nOpção: ");
    scanf("%d", &opcao30);
    switch(opcao30){
        case 1:
            printf("Informe o nome do novo contato que deseja cadrastrar: ");
            scanf("%s", nome3);
            printf("Informe o número de telefone que deseja cadrastrar +xx (xxx) xxxxx-xxxx: ");
            scanf("%d", &numero3);
            printf("Informe o email do novo contato que deseja cadrastrar: ");
            scanf("%s", email3);
            printf("\nContato salvo com sucesso!");
        break;
        
        case 2:
            int opcao2, opcao3;
            printf("Informe o contato que deseja alterar: 1, 2 ou 3 ");
            scanf("%d", &opcao3);
            printf("Informe o dado que gostaria de alterar\n(1)- Nome\n(2)- Número\n(3)- Email\n Opção: ");
                scanf("%d", &opcao2);
            switch(opcao3){
                case 1: 
                switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome1);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero1);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email1);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 2:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome2);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero2);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email2);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 3:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome3);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero3);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email3);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
            }
        break;
        
        case 3: 
         int opcao4;
        printf("Informe o contato que gostaria de consultar: ");
        scanf("%d", &opcao4);
        switch(opcao4){
            case 1: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome1, numero1, email1);
            break;
            
            case 2: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome2, numero2, email2);
            break;
            
            case 3: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome3, numero3, email3);
            break;
        }
        break;
        
        case 4: 
        printf("Adiós!");
        break;
    }
}
        case 3: 
        int opcao4;
        printf("Informe o contato que gostaria de consultar: ");
        scanf("%d", &opcao4);
        switch(opcao4){
            case 1: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome1, numero1, email1);
            break;
            
            case 2: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome2, numero2, email2);
            break;
            
            case 3: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome3, numero3, email3);
            break;
        }
        break;
        
        case 4: 
        printf("Adiós!");
        break;
    }
    
    printf("\nSelecione a operação:\n(1)- Cadastrar\n(2)- Alterar\n(3)- Consultar todos os dados\n(4)- Sair\nOpção: ");
    scanf("%d", &opcao30);
    switch(opcao30){
        case 1:
            printf("Informe o nome do novo contato que deseja cadrastrar: ");
            scanf("%s", nome3);
            printf("Informe o número de telefone que deseja cadrastrar +xx (xxx) xxxxx-xxxx: ");
            scanf("%d", &numero3);
            printf("Informe o email do novo contato que deseja cadrastrar: ");
            scanf("%s", email3);
            printf("\nContato salvo com sucesso!");
        break;
        
        case 2:
            int opcao2, opcao3;
            printf("Informe o contato que deseja alterar: 1, 2 ou 3 ");
            scanf("%d", &opcao3);
            printf("Informe o dado que gostaria de alterar\n(1)- Nome\n(2)- Número\n(3)- Email\n Opção: ");
                scanf("%d", &opcao2);
            switch(opcao3){
                case 1: 
                switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome1);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero1);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email1);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 2:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome2);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero2);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email2);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 3:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome3);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero3);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email3);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
            }
        break;
        
        case 3: 
         int opcao4;
        printf("Informe o contato que gostaria de consultar: ");
        scanf("%d", &opcao4);
        switch(opcao4){
            case 1: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome1, numero1, email1);
            break;
            
            case 2: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome2, numero2, email2);
            break;
            
            case 3: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome3, numero3, email3);
            break;
        }
        break;
        
        case 4: 
        printf("Adiós!");
        break;
    }
}
                printf("\nContato editado com sucesso!");
            }
                break;
                
                case 3:
                 switch(opcao2){
                case 1:
                printf("Informe o novo nome do contato: ");
                scanf("%s", nome3);
                break;
                
                case 2: 
                printf("Informe o novo número do contato: ");
                scanf("%d", &numero3);
                break;
                
                case 3:
                printf("Informe o novo email do contato: ");
                scanf("%s", email3);
                break;
                printf("\nContato editado com sucesso!");
            }
                break;
            }
        break;
        
        case 3: 
         int opcao4;
        printf("Informe o contato que gostaria de consultar: ");
        scanf("%d", &opcao4);
        switch(opcao4){
            case 1: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome1, numero1, email1);
            break;
            
            case 2: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome2, numero2, email2);
            break;
            
            case 3: 
            printf("Nome cadastrado: %s\nNúmero cadastrado: %d\nEmail cadastrado: %s", nome3, numero3, email3);
            break;
        }
        break;
        
        case 4: 
        printf("Adiós!");
        break;
    }
}
