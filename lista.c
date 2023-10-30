#include <stdio.h>

typedef struct 
{
    char nome[32];
    int ingrediente;
    float qtd;
    float precoDeVenda;
    int qtdDeVendas;
} Receita;

void cadastrar(Receita *receitas, int UltimaPos){
    printf("\nInforme o nome da receita: ");
    getchar();
    gets(receitas[UltimaPos].nome);
    printf("\nInforme o ingrediente da receita (1 para ovos e 2 para leite): ");
    scanf("%d", &receitas[UltimaPos].ingrediente);
    printf("\nInforme a quantidade de ingredientes para produzir a receita: ");
    scanf("%f", &receitas[UltimaPos].qtd);
    printf("\nInforme o preço de venda: ");
    scanf("%f", &receitas[UltimaPos].precoDeVenda);
    printf("\nInforme a quantidade de vendas da receita: ");
    scanf("%d", &receitas[UltimaPos].qtdDeVendas);
}

int maisOvos(int qtdOvos, int qtdParaAcrescentar){
    return qtdOvos += qtdParaAcrescentar;
}

float maisLeite(float qtdLeite, int qtdParaAcrescentar){
    return qtdLeite += qtdParaAcrescentar;
}

float vender(Receita *receitas, int codigo){
    Receita receita = receitas[codigo];
    receita.qtdDeVendas++;
    return receita.qtd;
}

void mostrarTotais(Receita *receitas, int ultimaPos){
    for(int i = 0; i < ultimaPos; i++){
        printf("\nO total de vendas de %s foi de %d", receitas[i].nome, receitas[i].qtdDeVendas);
    }
}


void main(){
    Receita receitas[20];
    int qtdOvos = 24; // N
    float qtdLeite = 10; // L
    int opcao = -1, ultimoIndex = 0, index;
    while(opcao!=6){
        printf("\nMenu\n(1)-Cadastrar uma nova receita\n(2)-Adicionar a quantidade de ovos\n(3)-Adicionar a quantidade de leite\n(4)-Vender uma receita\n(5)-Mostrar o total de vendas de cada produto\n(6)-Sair\nOpção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
        if(ultimoIndex < 20){
            cadastrar(receitas, ultimoIndex);
            ultimoIndex++;
        }else{
            printf("\nNão é possível cadastrar mais que 20 produtos!");
        }    
            break;
        case 2:
            printf("\nInforme a quantidade a ser acrescentada: ");
            float add;
            scanf("%f", &add); 
            qtdOvos =   (int)maisOvos(qtdOvos, add);
            printf("\nA nova quantidade de ovos no estoque é de: %d ovos", qtdOvos);
        break; 
        case 3:
            printf("\nInforme a quantidade a ser acrescentada: ");
            float add2;
            scanf("%f", &add2); 
            qtdLeite = maisLeite(qtdLeite, add2);
            printf("\nA nova quantidade de leite no estoque é de: %.1f litros", qtdLeite);
        break;
        case 4: 
            printf("Informe o código (index) do produto: ");
            scanf("%d", &index);
            Receita receita = receitas[index];
                if(receita.ingrediente == 1){
                    qtdOvos = vender(receitas, index);
                }else{
                    qtdLeite = vender(receitas, index);
                }
        break;
        case 5: 
            mostrarTotais(receitas, ultimoIndex);
        break;
        case 6: 
            printf("\nObrigado por utilizar nossos serviços, volte sempre!");
        break;
        }
    }

}
