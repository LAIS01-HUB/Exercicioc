#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    int numero;       // Variável para armazenar o número digitado pelo usuário
    int fatorial = 1; // Variável para armazenar o resultado do fatorial (inicialmente 1)
    int i;            // Variável de controle para o laço

    // Solicita ao usuário que digite um número
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);  // Lê o número digitado e armazena em 'numero'

    // Calcula o fatorial do número usando um laço 'for'
    for(i = 1; i <= numero; i++) {
        fatorial = fatorial * i;  // Multiplica o valor atual de 'fatorial' por 'i'
    }

    // Exibe o resultado final
    printf("O fatorial de %d é: %d\n", numero, fatorial);

    return 0;  // Indica que o programa terminou com sucesso
}
