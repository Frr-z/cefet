/*
 - Desenvolva um programa em C para ser utilizado pelo gerente de uma Fábrica de Guitarras Personalizadas para o cadastro de seus fornecedores.

Seu programa, deverá cadastrar em um Vetor de Estrutura os dados dos 12 fornecedores nos seguintes campos: NOME DO FORNECEDOR, VALOR DO FRETE, PRAZO DE ENTREGA.

 

Após o cadastro, o programa deverá:

 

a)Chamar uma função para aumentar R$100,00 no valor do frete apenas do fornecedor com menor prazo de entrega. 

Atenção: Essa função deverá receber o parâmetro VALOR DO FRETE por referência.

 

b)Chamar uma outra função que apresente na tela todos os dados de todos os fornecedores.
*/

#include <stdio.h>

typedef struct
{
    char NOMEDOFORNECEDOR[32]; // string
    float VALORDOFRETE; // R%
    int PRAZODEENTREGA; // dias

} Fornecedor;

void Checar(int *VALORDOFRETE){
    VALORDOFRETE += 100;
}

void Dados(Fornecedor Fornecedores[12]){
    for(int j = 0; j < 12; j++){
        Fornecedor f = Fornecedores[i];
        printf("\nNome do fornecedor: %s\nValor do frete: %f\nPrazo de entrega: %d", f.NOMEDOFORNECEDOR, f.VALORDOFRETE, f.PRAZODEENTREGA);
    }
}

void Cadastro(Fornecedor Fornedores[], int Index, int *MenorPrazo){
    printf("\nInforme o nome do fornecedor: ");
    getchar();
    gets(Fornedores[Index].NOMEDOFORNECEDOR);
    printf("\nInforme o valor do frete: ");
    scanf("%f", &Fornedores[Index].VALORDOFRETE);
    printf("\nInforme o prazo em dias para a entrega: ");
    scanf("%d", &Fornedores[Index].PRAZODEENTREGA);
    if(Fornedores[Index].PRAZODEENTREGA < MenorPrazo){
        MenorPrazo = Fornedores[Index].PRAZODEENTREGA;
        Checar(&Fornedores[Index].VALORDOFRETE);
    }
}

void main(){
    Fornecedor Fornecedores[12];
    int MenorPrazo = 1000;
    int* Pointer = &MenorPrazo;
    for(int i = 0; i < 12; i++){
        Cadastro(Fornecedores, i, Pointer);
    }

}
