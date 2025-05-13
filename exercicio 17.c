#include <stdio.h> // Biblioteca para entrada e saída padrão

// Definição da struct Pessoa
struct Pessoa {
    char nome[50]; // Nome da pessoa (string de até 49 caracteres)
    int idade;     // Idade da pessoa
};

int main() {
    struct Pessoa pessoa1, pessoa2; // Declaração de duas variáveis do tipo Pessoa

    // Leitura dos dados da primeira pessoa
    printf("Digite o nome da primeira pessoa: ");
    scanf(" %49[^\n]", pessoa1.nome); // Lê o nome com espaços

    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &pessoa1.idade); // Lê a idade

    // Leitura dos dados da segunda pessoa
    printf("Digite o nome da segunda pessoa: ");
    scanf(" %49[^\n]", pessoa2.nome); // Lê o nome com espaços

    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &pessoa2.idade); // Lê a idade

    // Comparação das idades
    printf("\n--- Resultado ---\n");
    if (pessoa1.idade > pessoa2.idade) {
        printf("%s é mais velha que %s.\n", pessoa1.nome, pessoa2.nome);
    } else if (pessoa2.idade > pessoa1.idade) {
        printf("%s é mais velha que %s.\n", pessoa2.nome, pessoa1.nome);
    } else {
        printf("%s e %s têm a mesma idade.\n", pessoa1.nome, pessoa2.nome);
    }

    return 0; // Fim do programa
}
