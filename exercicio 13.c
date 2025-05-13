#include <stdio.h>

int main() {
    int numeros[10]; // Vetor para armazenar os 10 valores inseridos pelo usuário
    int i;           // Variável de controle para o laço
    int quantidadePares = 0; // Contador para a quantidade de números pares

    // Leitura dos 10 valores
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]); // Lê cada número e armazena no vetor
    }

    // Verificação de números pares
    for (i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) { // Se o número for divisível por 2, é par
            quantidadePares++;    // Incrementa o contador de pares
        }
    }

    // Exibe o resultado
    printf("Quantidade de números pares: %d\n", quantidadePares);

    return 0; // Fim do programa
}
