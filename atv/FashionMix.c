#include <stdio.h>

int main() {
    int codigo;

    do{
        printf("Digite o código da peça :\n");
        printf("1 - camisa\n");
        printf("2 - calça\n");
        printf("3 - casaco\n");
        scanf("%d", &codigo);

        switch(codigo) {
            case 1:
                printf("Peça: Camisa\nPreço: R$ 60,00\n");
                break;
            case 2:
                printf("Peça: Calça\nPreço: R$ 80,00\n");
                break;
            case 3:
                printf("Peça: Casaco\nPreço: R$ 120,00\n");
                break;
            default:
                printf("Código inválido! Por favor, digite 1, 2 ou 3.\n");
        }
    }while(codigo != 0);
    
        return 0;
}
