#include <stdio.h>

int main() {
    int ingressos, pontos;
    int cliente = 0;

    do {
        printf("Digite a quantidade de ingressos comprados pelo cliente %d ou 0 para sair: ", cliente);
        scanf("%d", &ingressos);

        if (ingressos > 0) {
            pontos = ingressos * 5;
            printf("Cliente %d acumulou %d pontos.\n", cliente, pontos);
            cliente++;
        } else if (ingressos < 0) {
            printf("Valor inválido. Digite 0 para sair.\n");
        }

    } while (ingressos != 0);

    printf("Saindo...\n");

    return 0;
}