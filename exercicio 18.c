#include <stdio.h> // Biblioteca para entrada e saída padrão

// Definição da struct Aluno
struct Aluno {
    char nome[50];  // Nome do aluno (string de até 49 caracteres)
    float nota1;    // Primeira nota
    float nota2;    // Segunda nota
    float nota3;    // Terceira nota
};

int main() {
    struct Aluno aluno; // Declaração de uma variável do tipo Aluno
    float media;        // Variável para armazenar a média

    // Leitura dos dados do aluno
    printf("Digite o nome do aluno: ");
    scanf(" %49[^\n]", aluno.nome); // Lê o nome com espaços

    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1); // Lê a nota 1

    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2); // Lê a nota 2

    printf("Digite a terceira nota: ");
    scanf("%f", &aluno.nota3); // Lê a nota 3

    // Cálculo da média
    media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;

    // Impressão dos resultados
    printf("\n--- Boletim do Aluno ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Notas: %.2f, %.2f, %.2f\n", aluno.nota1, aluno.nota2, aluno.nota3);
    printf("Média: %.2f\n", media);

    // Verificação se foi aprovado
    if (media >= 6.0) {
        printf("Resultado: Aprovado\n");
    } else {
        printf("Resultado: Reprovado\n");
    }

    return 0; // Fim do programa
}
