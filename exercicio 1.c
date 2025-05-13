#include <stdio.h>

int main() {
    int numero;  // Declara uma variável do tipo inteiro chamada 'numero'

    // Solicita ao usuário que digite um número
    printf("Digite um número inteiro: ");
    
    // Lê o número digitado pelo usuário e armazena na variável 'numero'
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        // Se o resto da divisão por 2 for 0, é par
        printf("O número %d é par.\n", numero);
    } else {
        // Caso contrário, é ímpar
        printf("O número %d é ímpar.\n", numero);
    }

    return 0; // Encerra o programa
}
