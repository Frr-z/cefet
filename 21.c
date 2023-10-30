// Online C compiler to run C program online
#include <stdio.h>

typedef struct{
    char nome[30];
    int numero;
    int titular;
    int altura;
} Jogador;

int main() {
    
    Jogador Jogadores[12];
    int titulares, opcao = -1, j;
    int maisAlto = 0, maisBaixo = 0;
    
    for(int i = 0; i < 3; i++){
       printf("\nInforme o nome do %dº jogador: ", i + 1);
       gets(Jogadores[i].nome);
       printf("\nInforme o número do %dº jogador: ", i + 1);
       scanf("%d", &Jogadores[i].numero);
       printf("\nInforme a altura do %dº jogador (em centimetros): ", i + 1);
       scanf("%d", &Jogadores[i].altura);
       if(Jogadores[i].altura >= Jogadores[maisAlto].altura){
           maisAlto = i;
       }
       if(Jogadores[i].altura <= Jogadores[maisBaixo].altura){
           maisBaixo = i;
       }
       if(titulares < 6){
       printf("\nInforme se o %dº jogador é titular ou não (1: Sim e 0: Não): ", i + 1);
       scanf("%d", &Jogadores[i].titular);
       if(Jogadores[i].titular == 1){
           titulares++;
       }
       }
       getchar();
    }
        
    while(opcao != 6){
    
    printf("\nInforme a opção:\n(1)-Listar o nome de todos os jogadores\n(2)-Mostrar o nome do jogador mais alto e mais baixo\n(3)-Trocar um jogador do time titular e colocá-lo como reserva\n(4)-Mostrar o time titular\n(5)-Mostrar o time reserva\n(6)-Sair\nOpção: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
          printf("\nA lista dos jogadores é: ");    
          for(j = 0; j < 3; j++){
            printf("%s\n", Jogadores[j].nome);
            }
        break;
        case 2:
            printf("\nO jogador mais alto é: %s", Jogadores[maisAlto].nome);
            printf("\nO jogador mais baixo é: %s", Jogadores[maisBaixo].nome);
        break;
        case 3: 
            printf("\nInforme o número do jogador titular e do reserva, respectivamente: ");
            int t, r, pt = -1;
            scanf("%d%d", &t, &r);
            for(j = 0; j < 3; j++){
                if(Jogadores[j].titular == 1 && Jogadores[j].numero == t){
                    pt = j;
                }
                if(Jogadores[j].titular == 0 && Jogadores[j].numero == r && pt != -1){
                    Jogadores[pt].titular = 0;
                    Jogadores[j].titular = 1;
                    pt = -1;
                    printf("\nSucesso!");
                }else{
                    printf("\nNão foi possível transferir os jogadores!");
                }
            }
        break;
        case 4:
        for(j = 0; j < 3; j++){
            if(Jogadores[j].titular == 1){
                printf("\n%s", Jogadores[j].nome);
            }
        }
        break;
        case 5:
        for(j = 0; j < 3; j++){
            if(Jogadores[j].titular == 0){
                printf("\n%s", Jogadores[j].nome);
            }
        }
        break;
        case 6:
        break;
    }}
    return 0;
}
