import java.util.Scanner;

/**
 * aula3
*/
public class aula3 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        /*System.out.println("Informe um número positivo: ");
        int num = leitor.nextInt();

        if(num < 0){
            System.out.println("Número invalido!");
            main(args);
            return;
        }*/

        /* 
        char opcao = 'e';
        float saldo = 0;
        float valor = 0;

        while (opcao != 'd') {
            System.out.println("Menu:\n (a) - Consultar saldo\n (b) - Efetuar saque\n (c) - Efetuar um depósito\n (d) - Sair");
            if (leitor.hasNextLine()) {
                opcao = leitor.nextLine().toLowerCase().charAt(0);
            } else {
                // Handle the case where there is no next line
                System.out.println("Erro na entrada. Tente novamente.");
                continue;
            }
            
            switch (opcao) {
                case 'a':
                    System.out.println("Seu saldo é de R$" + saldo);
                    break;
                case 'b':
                    System.out.println("Informe o valor que você quer sacar: ");
                    valor = leitor.nextFloat();
                    leitor.nextLine();
                    if(saldo < valor){
                        System.out.println("Você não tem essa quantia na conta! Verifique seu saldo");
                        break;
                    }
                    saldo -= valor;
                    break;
                case 'c':
                    System.out.println("Informe o valor que você quer depositar: ");
                    valor = leitor.nextFloat();
                    leitor.nextLine();
                    if(valor < 0){
                        System.out.println("Os valores precisam");
                        break;
                    }
                    saldo += valor;
                    break;
                default:
                    break;
            }   
        }*/

        /* 
        float lastInput = -1, total = 0;
        int i = 0;

        while (lastInput != 0) {
            System.out.print("Informe o número: ");
            lastInput = leitor.nextFloat();
            if(lastInput%2==0){
                total += lastInput;
                i++;
            }
        }

        if (i > 1) {  
            System.out.println("A média dos números foi de: " + total / (i - 1));
        } else {
            System.out.println("Nenhum número par foi informado.");
        }    
        */
       int inicio = 0, fim = 0;

       System.out.print("Informe o número de início: ");
       inicio = leitor.nextInt();
       System.out.print("Informe o número de fim: ");
       fim = leitor.nextInt();

        if(fim < inicio){
            System.out.println("O número final não pode ser menor que o número inicial!");   
        }
        if(fim < 0 || inicio < 0){
            System.out.println("Os números de início e/ou fim não podem ser menores que 0");
        }        

       for(int i = inicio; i <= fim; i++){
        System.out.println(i);;
       }
    }
}