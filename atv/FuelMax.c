#include <stdio.h>

int main() {
    int combustivel;
    float litros, preco, total;

        printf("Escolha um tipo de combustivel:\n");
        printf("1. Gasolina\n");
        printf("2. Etanol\n");
        printf("3. Diesel\n");
        printf("Digite a opcao: ");
        scanf("%d", &combustivel);
        
        printf("Digite a quantidade de litros abastecida: ");
        scanf("%f", &litros);

        switch (combustivel) {
        case 1:
            preco = 6,50;
            break;
        case 2:
            preco = 4.29; 
            break;
        case 3:
            preco = 5.49; 
            break;
        default:
            printf("Tipo de combustível inválido.\n");
            break; 
    }

    total = litros * preco;
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}