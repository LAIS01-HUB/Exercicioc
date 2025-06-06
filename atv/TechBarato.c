#include <stdio.h> 

int main() { 
    float preco[10]; 
    int caro, barato;
	char prod; 

    for (int i = 0; i < 10; i++) { 
        printf("Digite o %d preco: ", i + 1);
        scanf("%f", &preco[i]); 
    }

    caro = barato = preco[0]; 

    for (int i = 1; i < 10; i++) {
        if (preco[i] > caro) {
            caro = preco[i];
        }
        if (preco[i] < barato) {
            barato = preco[i]; 
        }
    }
    printf("Mais caro: R$ %d\n", caro); 
    printf("Mais barato: R$ %d\n", barato); 
    return 0;
}