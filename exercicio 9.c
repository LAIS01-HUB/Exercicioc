#include <stdio.h>  // Biblioteca necessária para usar printf e scanf

int main() {
    int opcao;       // Variável para armazenar a escolha do usuário no menu
    int num1, num2;  // Variáveis para armazenar os números a serem somados ou subtraídos

    // Laço que repetirá o menu até o usuário escolher a opção de sair
    do {
        // Exibe o menu de opções
        printf("\nMenu de Opções:\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Sair\n");
        printf("Escolha uma opção (1-3): ");
        scanf("%d", &opcao);  // Lê a opção escolhida pelo usuário

        // Processa a escolha do usuário
        if(opcao == 1) {  // Caso o usuário escolha Somar
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);  // Lê o primeiro número
            printf("Digite o segundo número: ");
            scanf("%d", &num2);  // Lê o segundo número
            printf("Resultado da soma: %d\n", num1 + num2);  // Exibe o resultado da soma
        }
        else if(opcao == 2) {  // Caso o usuário escolha Subtrair
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);  // Lê o primeiro número
            printf("Digite o segundo número: ");
            scanf("%d", &num2);  // Lê o segundo número
            printf("Resultado da subtração: %d\n", num1 - num2);  // Exibe o resultado da subtração
        }
        else if(opcao == 3) {  // Caso o usuário escolha Sair
            printf("Saindo do programa...\n");
        }
        else {  // Caso o usuário digite uma opção inválida
            printf("Opção inválida! Tente novamente.\n");
        }
    } while(opcao != 3);  // Repete o menu enquanto a opção não for "Sair" (opção 3)

    return 0;  // Indica que o programa terminou com sucesso
}
