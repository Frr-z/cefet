#include <stdio.h>

int main() {
    /*
    2)
    int conta = 999, senha = 456, c, s;
    float saldo = 100, s2;
    
    printf("\nInforme o número da conta: ");
    scanf("%d", &c);
    printf("\nInforme a senha da conta: ");
    scanf("%d", &s);
    if(c == conta && s == senha){
        printf("\nInforme o valor a ser sacado: ");
        scanf("%f", &s2);
        if(s2 < saldo){
            saldo-=s2;
            printf("Valor sacado com sucesso! Seu novo saldo é: R$%.2f.", saldo);
        }else{
            printf("\nSaldo insuficiente.");
        }
    }else{
        printf("\nOs dados estão incorretos.");
    }
    */
    
    /*
    3)
    int matriculas[3] = {987,321,654}, senhas[3] = {789,123,456}, M, S;
    
    printf("\nInforme a matŕicula: ");
    scanf("%d", &M);
    printf("\nInforme a senha: ");
    scanf("%d", &S);
    for(int i = 0; i<3; i++){
        if(matriculas[i] == M && senhas[i] == S){
            printf("Cadastro realizado com sucesso!");
            break;
        } else if((matriculas[i] != M || senhas[i] != S) && i == 2){
            printf("Não foi possível realizar o cadastro! Erro: As informações estão incorretas.");
        }
    } 
    */
  
    /*
    4)
    for(int i =0; i<4; i++){
        int i1, nmr = rand() % 20;
        printf("\nInforme o valor: ");
        scanf("%d", &i1);
        if(i1 == nmr){
            printf("\nVocê acertou o número (%d)!", nmr);
        }else{
            printf("\nVocê errou o número (%d)!", nmr);
        }
    }
    printf("\nFim de jogo!");
    */
    
    
    /*
    5)
    int Nota;
    printf("\nInforme sua nota: ");
    scanf("%d", &Nota);
    if(Nota >= 1 && Nota <= 3){
        printf("\nSua nota está ruim!");
    }else if(Nota >= 4 && Nota <= 6){
        printf("\nSua nota está ruim!");
    }else if(Nota >= 7 && Nota <= 12){
        printf("\nSua nota está boa!");
    }else if(Nota >= 13 && Nota <= 15){
        printf("\nSua nota está ótima!");
    }
    */
    return 0;
}
