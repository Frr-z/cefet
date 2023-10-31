#include <stdio.h>
#include <string.h>

typedef struct
{
    char Tipo[1];
    char NomeDaBanda[32];
    float PrecoDeCompra;
    int AnoQueFoiLancado;
    char NomeDoDisco[32];
    int QuantidadeDeCancoes;
    float Nota;
} Disco;

Disco DiscoUm(Disco Discos[]){
    Disco NovoDisco;
    printf("\nInforme o tipo do disco (A, B ou C): ");
    scanf("%c", &NovoDisco.Tipo);
    printf("\nInforme o nome da banda: ");
    getchar();
    gets(NovoDisco.NomeDaBanda);
    printf("\nInforme o preço do disco: ");
    scanf("%f", &NovoDisco.PrecoDeCompra);
    printf("\nInforme o ano que o disco foi lançado: ");
    scanf("%d", &NovoDisco.AnoQueFoiLancado);
    printf("\nInforme o nome do disco: ");
    getchar();
    gets(NovoDisco.NomeDoDisco)   ; 
    printf("\nInforme a quantidade de canções: ");
    scanf("%d", &NovoDisco.QuantidadeDeCancoes);
    printf("\nInforme a nota do disco (1-10): ");
    scanf("%f", &NovoDisco.Nota);
    return NovoDisco;
}

void DiscoDois(Disco Discos[], char Nome[32]){
    int Count = 0;
    for(int i = 0; i < 100; i++){
        if(strcmp(Nome, Discos[i].NomeDaBanda) == 0){
            Count++;
            Disco DiscoSelecionado = Discos[i];
            printf("\nTipo do disco: %c", DiscoSelecionado.Tipo);
            printf("\nNome da banda: %s", DiscoSelecionado.NomeDaBanda);
            printf("\nPreço de compra: R$%.2f", DiscoSelecionado.PrecoDeCompra);
            printf("\nAno que foi lançado: %d", DiscoSelecionado.AnoQueFoiLancado);
            printf("\nNome do disco: %s", DiscoSelecionado.NomeDoDisco);
            printf("\nQuantidade de canções: %d", DiscoSelecionado.QuantidadeDeCancoes);
            printf("\nNota do disco: %.1f", DiscoSelecionado.Nota);
        }
    }
    if(Count == 0){
        printf("\nNão foi encontrado nenhum disco na galeria com o nome desse artista ou banda!");
        return;
    }
}

void DiscoTres(Disco Discos[]){
    float Soma1, Soma2, Soma3;
    for(int d = 0; d < 100; d++){
        if(Discos[d].Tipo == "A"){
            Soma1+=Discos[d].PrecoDeCompra;
        }else if(Discos[d].Tipo == "B"){
            Soma2+=Discos[d].PrecoDeCompra;
        }else (Discos[d].Tipo == "C"){
            Soma3+=Discos[d].PrecoDeCompra;
        }
    }
}

void DiscoQuatro(Disco Discos[]){
    for(int d = 0; d < 100; d++){
        if(Discos[d].AnoQueFoiLancado < 2006){
            printf("\nNome do disco: %s", Discos[d].NomeDoDisco);
            printf("\nAutor(es) do disco: %s", Discos[d].NomeDaBanda);
        }
    }
}

Disco DiscoCinco(Disco Discos[],int QuantidadeDeCancoes,float NotaMinima){
    int Count = 0;
    for(int d = 0; d < 100; d++){
        if(Discos[d].QuantidadeDeCancoes >= QuantidadeDeCancoes && Discos[d].Nota >= NotaMinima){
            Count++;
            Disco DiscoSelecionado = Discos[i];
            printf("\nTipo do disco: %c", DiscoSelecionado.Tipo);
            printf("\nNome da banda: %s", DiscoSelecionado.NomeDaBanda);
            printf("\nPreço de compra: R$%.2f", DiscoSelecionado.PrecoDeCompra);
            printf("\nAno que foi lançado: %d", DiscoSelecionado.AnoQueFoiLancado);
            printf("\nNome do disco: %s", DiscoSelecionado.NomeDoDisco);
            printf("\nQuantidade de canções: %d", DiscoSelecionado.QuantidadeDeCancoes);
            printf("\nNota do disco: %.1f", DiscoSelecionado.Nota); 
            return DiscoSelecionado;
        }
    }
    printf("\nVocê está muito exigente!");
}

void main(){
    Disco Discos[100];
    int Opcao;
}