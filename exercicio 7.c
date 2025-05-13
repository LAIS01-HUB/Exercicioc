#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {
    int numero;     // Declara uma variável inteira chamada 'numero'
    int i;          // Declara uma variável inteira 'i' que será usada no laço (loop)

    // Solicita que o usuário digite um número
    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &numero);  // Lê o número digitado pelo usuário e armazena na variável 'numero'

    // Início do loop que vai de 1 até 10
    for(i = 1; i <= 10; i++) {
        // Exibe o resultado da multiplicação do número pelo valor atual de 'i'
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}
