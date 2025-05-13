#include <stdio.h>  // Biblioteca necessária para usar printf e scanf

int main() {
    int i;           // Variável de controle para o laço (vai de 1 a 200)
    int soma = 0;    // Variável que acumula a soma dos números pares

    // Laço que percorre os números de 1 até 200
    for(i = 1; i <= 200; i++) {
        // Verifica se o número é par
        if(i % 2 == 0) {
            soma = soma + i;  // Adiciona o número par à variável soma
        }
    }

    // Exibe o resultado final
    printf("A soma dos 100 primeiros numeros pares (de 1 a 200) é: %d\n", soma);

    return 0;  // Indica que o programa terminou corretamente
}
