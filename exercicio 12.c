#include <stdio.h>

int main() {
    int numeros[10]; // Declaração do vetor para armazenar os 10 números
    int maior, menor; // Variáveis para armazenar o maior e o menor valor
    int i;

    // Leitura dos 10 números
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]); // Lê cada número e armazena no vetor
    }

    // Inicializa o maior e menor com o primeiro valor do vetor
    maior = numeros[0];
    menor = numeros[0];

    // Verificação do maior e menor valor
    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i]; // Atualiza o maior valor
        }
        if (numeros[i] < menor) {
            menor = numeros[i]; // Atualiza o menor valor
        }
    }

    // Exibe o maior e o menor valor
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

    return 0;
}
