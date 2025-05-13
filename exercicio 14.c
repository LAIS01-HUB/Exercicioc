#include <stdio.h> // Biblioteca padrão de entrada e saída

int main() {
    int vetor[5]; // Declaração de um vetor com 5 posições
    int i;        // Variável de controle para os laços

    // Leitura dos 5 valores do usuário
    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]); // Armazena cada número no vetor
    }

    // Impressão dos valores na ordem inversa
    printf("Vetor invertido:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]); // Imprime do último para o primeiro
    }

    printf("\n"); // Apenas quebra de linha ao final
    return 0; // Fim do programa
}
