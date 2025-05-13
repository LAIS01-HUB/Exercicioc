#include <stdio.h> // Biblioteca padrão de entrada e saída

int main() {
    // Declaração da variável para armazenar a idade
    int idade;

    // Solicita ao usuário que digite a idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade); // Lê a idade fornecida pelo usuário

    // Verifica a faixa etária para determinar a categoria eleitoral
    if (idade < 16) {
        // Se a idade for menor que 16, a pessoa não vota
        printf("Nao vota.\n");
    } else if (idade >= 16 && idade <= 17) {
        // Se a idade for entre 16 e 17, o voto é facultativo
        printf("Voto facultativo.\n");
    } else if (idade >= 18 && idade <= 69) {
        // Se a idade for entre 18 e 69, o voto é obrigatório
        printf("Voto obrigatorio.\n");
    } else {
        // Se a idade for 70 ou mais, o voto é facultativo
        printf("Voto facultativo.\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}
