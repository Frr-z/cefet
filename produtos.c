#include <stdio.h>

typedef struct
{
    int codigo;
    float precocompra;
    float precovenda;
    int quantidadeestocada;
    char nome[32];
} produto;

void main() {
    int opcao;           
    int maiorlucro = 1;
    
    produto Produtos[10];
    for(int i=1; i<=10; i++){
        printf("\nInforme os dados do %dº produto.\n", i);
        printf("\nInforme o código:");
        scanf("%d", &Produtos[i].codigo);
        printf("\nInforme o nome: ");
        scanf("%s", &Produtos[i].nome);
        printf("\nInforme o preço de compra: ");
        scanf("%f", &Produtos[i].precocompra);
        printf("\nInforme o preço de venda: ");
        scanf("%f", &Produtos[i].precovenda);
        printf("\nInforme a quantidade em estoque: ");
        scanf("%d", &Produtos[i].quantidadeestocada);
        if(Produtos[i].precovenda - Produtos[i].precocompra >= Produtos[maiorlucro].precovenda - Produtos[maiorlucro].precocompra ){
            maiorlucro = i;
        }
    }
    
    while(opcao != 5){
    printf("\n\n\n*MENU*\n1 - Mostrar o preço de venda de algum produto\n2 - Efetuar uma venda\n3 - Mostrar todos os dados de todos os produtos\n4 - Mostrar o produto que dá mais lucro\n5 - Sair\nOpção: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        int nmrproduto;
        printf("\nInforme o produto que você quer consultar: ");
        scanf("%d", &nmrproduto);
        printf("O preço de venda desse produto é: R$%.2f\n", Produtos[nmrproduto].precovenda);
        break;
        case 2:
        int nmrprodutoo;
        printf("\nInforme o produto que você quer vender: ");
        scanf("%d", &nmrprodutoo);
       if (Produtos[nmrprodutoo].quantidadeestocada > 0){
           Produtos[nmrprodutoo].quantidadeestocada--;
           printf("\nVendido!");
       } else{
           printf("\nNão há estoque suficiente desse produto.");
       }
        break;
        case 3:
        for(int i =1; i<=10; i++){
            printf("---------------------------------------------------------------------------");
            printf("Produto %d: \n", i);
            printf("\nNome: %s", Produtos[i].nome);
            printf("\nCódigo: %d", Produtos[i].codigo);
            printf("\nPreço de compra: %f", Produtos[i].precocompra);
            printf("\nPreço de venda: %f", Produtos[i].precovenda);
            printf("\nQuantidade estocada: %d", Produtos[i].quantidadeestocada);
            printf("---------------------------------------------------------------------------");
        }
        break;
        case 4: 
        printf("\nO produto que dá mais lucro é o %s, com R$%.2f de lucro.", Produtos[maiorlucro].nome,-(Produtos[maiorlucro].precovenda - Produtos[maiorlucro].precocompra));
        break;
        case 5:
        return;
        break;
    }}
}
