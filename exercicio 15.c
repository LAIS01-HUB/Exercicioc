#include <stdio.h> // Biblioteca para entrada e saída padrão

// Declaração da struct para armazenar os dados do aluno
struct Aluno {
    char nome[50]; // Nome do aluno (string de até 49 caracteres)
    int idade;     // Idade do aluno
    int nota;      // Nota do aluno (poderia ser float, mas usamos int conforme pedido)
};

int main() {
    struct Aluno aluno; // Declaração de uma variável do tipo struct Aluno

    // Leitura dos dados do aluno
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome); // Lê o nome (sem espaços)

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade); // Lê a idade

    printf("Digite a nota do aluno: ");
    scanf("%d", &aluno.nota); // Lê a nota

    // Impressão dos dados do aluno
    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %d\n", aluno.nota);

    return 0; // Fim do programa
}
