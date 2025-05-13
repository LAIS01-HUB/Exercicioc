#include <stdio.h> // Biblioteca padrão de entrada e saída

int main() {
    // Declaração das variáveis para armazenar as duas notas e a média
    int nota1, nota2;
    float media;

    // Solicita ao usuário que digite a primeira nota
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1); // Lê a primeira nota

    // Solicita ao usuário que digite a segunda nota
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2); // Lê a segunda nota

    // Calcula a média das duas notas
    media = (nota1 + nota2) / 2.0; // Usamos 2.0 para garantir que o resultado seja decimal

    // Exibe a média calculada
    printf("Media: %.2f\n", media);

    // Verifica se a média é maior ou igual a 7
    if (media >= 7) {
        // Se for, o aluno está aprovado
        printf("Aluno aprovado!\n");
    } else {
        // Caso contrário, o aluno está reprovado
        printf("Aluno reprovado.\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}
