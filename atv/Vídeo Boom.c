#include <stdio.h>

int main() {
    int filmes;

    do {
        printf("Quantos filmes deseja alugar? (1 a 5): ");
        scanf("%d", &filmes);

        if(filmes < 1 || filmes > 5) {
            printf("Quantidade inválida! Por favor, digite um número entre 1 e 5.\n");
        }

    } while(filmes < 1 || filmes > 5);

    printf("Você escolheu alugar %d filme(s). Obrigado!\n", filmes);

    return 0;
}
