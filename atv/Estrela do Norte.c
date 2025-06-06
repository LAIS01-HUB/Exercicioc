#include <stdio.h>

int main() {
    
    int locacao[10];
    int locados = 0;
    float taxaLocacao;

    printf("--== Hotel Estrela do Norte ==--\n");

    for (int i = 0; i < 10; i++) {
        
        printf("O quarto %d está ocupado? (1 - Sim / 2 - Não): ", i + 1);
        scanf("%d", &locacao[i]);

        if (locacao[i] == 1) {
        locados++;
        }
    }

    taxaLocacao = (locados / 10.0) * 100;
    printf("A taxa de ocupação é de: %.2f\n", taxaLocacao);

    return 0;
}