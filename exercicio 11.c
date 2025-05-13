#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    int i;            // Variável de controle do laço
    int numero;       // Variável para armazenar cada número digitado
    int soma = 0;     // Variável para acumular a soma dos números
    int media;        // Variável para armazenar a média dos números

    // Laço que repete 10 vezes para ler os 10 números
    for(i = 1; i <= 10; i++) {
        // Solicita ao usuário que digite um número
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);  // Lê o número digitado

        soma = soma + numero;  // Adiciona o número à soma total
    }

    // Calcula a média inteira dividindo a soma por 10
    media = soma / 10;

    // Exibe a média calculada
    printf("A média dos 10 números é: %d\n", media);

    return 0;  // Indica que o programa terminou com sucesso
}
