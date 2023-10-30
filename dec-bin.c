#include <stdio.h>

int main() {
    // Decimal para binário
    
    int i = 0, Nmr,Nmr2, Divisores[1000] = {};
    char Str[] = {};

    printf("Informe o inteiro para ser convertido em binário: ");
    scanf("%d", &Nmr);
    
    while(Nmr >= 2){
        Nmr2 = Nmr%2;
        Divisores[i] = Nmr2;
        Nmr=Nmr/2;
        if(Nmr2 > 1){
            Nmr2 = 0;
        }
        i+=1;
    }
       

    if(Nmr == 2 || Nmr == 0){
        Divisores[i] = 0;
    } 
    if (Nmr == 1 || Nmr == 3){
        Divisores[i] = 1;
    }
    
    printf("Este número em binário é: ");
    for(int j = i; j>=0; j--){
        printf("%d", Divisores[j]);
    }
    
    

    return 0;
}
