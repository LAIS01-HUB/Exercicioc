#include <stdio.h>

// Definindo a estrutura para armazenar dados de um aluno
struct Aluno {
    char nome[50];
    float media_final;
};

int main() {
    // Criando um vetor de 5 alunos
    struct Aluno alunos[5];
    
    // Variável para armazenar a soma das médias dos alunos
    float soma_das_medias = 0.0;

    // Cadastro dos 5 alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);  // Leitura do nome do aluno
        printf("Digite a média final de %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].media_final);  // Leitura da média final do aluno
        soma_das_medias += alunos[i].media_final;  // Acumulando a média para calcular a média geral
        printf("\n");
    }

    // Calculando a média geral da turma
    float media_geral = soma_das_medias / 5.0;  // A média geral é a soma das médias dividida pelo número de alunos

    // Exibindo a média geral da turma
    printf("A média geral da turma é: %.2f\n", media_geral);

    return 0;
}
