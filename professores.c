#include <stdio.h>
#include <string.h>

typedef struct
{
    int CPF;
    char NomeCompleto[100];
    int QuantidadeDeAulas;
    float Salario;
} Professor;

void Cadastrar(Professor Professores[], int Index, Professor Grupo1[], int Qtd){
    Professor p = Professores[Index];
    printf("\nInforme o nome do professor: ");
    getchar();
    gets(p.NomeCompleto);
    printf("\nInforme o CPF do professor: ");
    scanf("%d", &p.CPF);
    printf("\nInforme a quantiadade de aulas do professor: ");
    scanf("%d", &p.QuantidadeDeAulas);
    printf("\nInforme o salário do professor: ");
    scanf("%f", &p.Salario);
    if(p.QuantidadeDeAulas <= Qtd){
        size_t Tamanho = sizeof(Grupo1) / sizeof(Grupo1[0]);
        Grupo1[Tamanho] = p;
    }
}

void Consultar(Professor Professores[]){
    for(int i = 0; i < 9; i++){
        Professor p = Professores[i];
        printf("\nNome: %s\nCPF: %d\nQuantidade de aulas: %d\nSalário: R$%.2f", p.NomeCompleto, p.CPF, p.QuantidadeDeAulas, p.Salario);
    }
}

void ConsultarM(Professor Professores[]){
    for(int i = 0; i < 9; i++){
        Professor p = Professores[i];
        printf("\nNome: %s\nCPF: %d\nQuantidade de aulas: %d\nSalário: R$%.2f", p.NomeCompleto, p.CPF, p.QuantidadeDeAulas, p.Salario);
    }
}

void Pedro(Professor Pedro){
    Pedro.Salario += 2000;
}

void main(){
    Professor Professores[9];
    Professor Grupo1[9];
    int Qtd = 1000;
    int i = 0, Opcao = -1;
    while(Opcao != 5){
        printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++\t"

                       "\nACADEMIA NAT\t"

        "\n1 – Cadastrar novo professor\t"

        "\n2 – Consultar todos os professores\t"

        "\n3 – Mostrar todos os dados dos professores com menor quantidade de aulas\t"

        "\n4 – Alterar o salário do salário professor chamado PEDRO para R$2.000,00\t"

        "\n5 – Sair\t"

        "\nInforme o número da opção desejada:\t"

        );
        scanf("%d", &Opcao);
        printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++\t");

        switch (Opcao)
        {
        case 1:
            Cadastrar(Professores, i, Grupo1, Qtd);
            break;
        case 2: 
            Consultar(Professores);
            break;
        case 3: 
            ConsultarM(Grupo1)  
            break;
        case 4: 
            for(int j = 0; j < 9; j++){
                char pNome = strtok(Professores[j].NomeCompleto, " ");
                if(strcmp(pNome, "Pedro") == 0){
                    Pedro(Professores[j]);
                }
            }       
        }
    }
    
}
