#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    int pratos = 0, sobremesas = 0, bebidas = 0;
    float desconto, total, valor, des;
    
    do {
        printf("---- Cardápio ----\n");
        printf("1 - Prato principal  R$35\n");
        printf("2 - Sobrimesa  R$20\n");
        printf("3 - Bebida  R$10\n");
        printf("4 - Finalizar pedido\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                pratos++;
                valor += 35;
                printf("Você escolheu o Prato principal!\n");
                break;
            case 2:
                sobremesas++;
                valor += 20;
                printf("Você escolheu a Sobrimesa!\n");  
                break;
            case 3:
                bebidas++;
                valor += 10;
                printf("Você escolheu a Bebida!\n");  
                break;
            case 4:
                printf("----Finalizando pedido----\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while(opcao != 4); 
    
    if (pratos >= 3) {
        des = 0.10;
    }
    if (sobremesas > 0 && bebidas > 0) {
        des += 0.05;
    }
        
        desconto= valor * (1 - des);
    
    
    printf("Pratos principais: %d\n", pratos);
    printf("Sobremesas: %d\n", sobremesas);
    printf("Bebidas: %d\n", bebidas);
    printf("Total sem desconto: R$ %.2f\n", valor);
    printf("Desconto aplicado: %.0f%%\n", des * 100);
    printf("Total com desconto: R$ %.2f\n", desconto);
    
    return 0;
}






