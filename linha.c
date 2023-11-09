#include <stdio.h>


typedef struct 
{
    char cidade_de_origem[100];
    char cidade_de_destino[100];
    float horario_de_saida;
} Linha;

int validar(int *codigo, int *senha){
    if(*codigo == 1 && *senha == 1){
        return 1;
    }{
        return 0;
    }
}

void mudar_senha(int *senha, int nova_senha){
    if(senha == nova_senha){
        printf("\nSua nova senha não pode ser igual a sua senha anterior!");
        return;
    }else{
        senha = nova_senha;
        printf("\nVocê alterou sua senha com sucesso!");
        return;
    }
}

void cadastrar_linha(Linha Linhas[], int Index){
    Linha NovaLinha;
    printf("\nInforme a cidade de origem: ");
    getchar();
    gets(NovaLinha.cidade_de_origem);
    printf("\nInforme a cidade de destino: ");
    getchar();
    gets(NovaLinha.cidade_de_destino);
    printf("\nInforme o horário de saída: ");
    scanf("%f", &NovaLinha.horario_de_saida);
    Linhas[Index] = NovaLinha;
}

void alterar_dado(int index_do_dado, Linha Linhas[]){
    Linha linha = Linhas[index_do_dado];
     printf("\nInforme a cidade de origem: ");
    getchar();
    gets(linha.cidade_de_origem);
    printf("\nInforme a cidade de destino: ");
    getchar();
    gets(linha.cidade_de_destino);
    printf("\nInforme o horário de saída: ");
    scanf("%f", &linha.horario_de_saida);
    return;
}

void tela_padrao(int *codigo, int *senha, Linha Linhas[]){
    int Opcao = -1, nova_senha, index = 0, index_dado = 0;
    while(Opcao != 4){
    printf("\nDaniel onibus\n(1)-Alterar sua senha\n(2)Cadastrar uma rota\n(3)-Mudar dado cadastrado\n(4)-Sair\nOpção: ");
    scanf("%d", &Opcao);
    switch (Opcao)
    {
    case 1:
        printf("\nInforme a nova senha: ");
        scanf("%d", &nova_senha);
        mudar_senha(*senha, nova_senha);
        break;
    
    case 2:
        cadastrar_linha(Linhas, index);
        index++;
        break;
    case 3:
        printf("\nInforme o index da linha: ");
        for(int j = 0; j < 7; j++){
            if(Linhas[j].cidade_de_destino != NULL && j >= 0 && j < 24){
            printf("\n----------------\nCidade de destino da linha: %s\nIndex da linha: %d\n----------------", Linhas[j].cidade_de_destino, j);
        }} 
        alterar_dado(index_dado, Linhas);
        break;  
    case 4:
        break;      
    }
    }
}

void main(){    
    int tentativas = 0, codigo, senha;
    Linha Linhas[8];
    for(int i = 0; i < 3; i++){
    printf("\nInforme seu código e senha, respectivamente: ");
    scanf("%d", &codigo);
    scanf("%d", &senha);
    if(validar(&codigo, &senha) == 1 && tentativas < 3){
        break;
    }else if(validar(&codigo, &senha) == 0 && tentativas < 3){
        printf("\nSenha incorreta! Tente novamente.");
        tentativas++;
    }
    if(i == 2){
        printf("\nAbortando, excesso de tentativas!");
        return;
    }
    }
    tela_padrao(&codigo, &senha, Linhas);
}
