#include <stdio.h>
#include <string.h>

// Definindo a estrutura para armazenar dados de um aluno
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    // Criando um vetor de 3 alunos
    struct Aluno alunos[3];

    // Variável para armazenar o nome a ser buscado
    char nome_busca[50];

    // Cadastro dos 3 alunos
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);  // Leitura do nome
        printf("Digite a idade de %s: ", alunos[i].nome);
        scanf("%d", &alunos[i].idade);  // Leitura da idade
        printf("Digite a nota de %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].nota);  // Leitura da nota
        printf("\n");
    }

    // Pedindo o nome a ser buscado
    printf("Digite o nome do aluno para buscar: ");
    scanf("%s", nome_busca);  // Leitura do nome para busca

    // Buscando o aluno pelo nome
    int encontrado = 0;  // Variável para controlar se o aluno foi encontrado
    for (int i = 0; i < 3; i++) {
        if (strcmp(alunos[i].nome, nome_busca) == 0) {
            printf("\nAluno encontrado:\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota: %.2f\n", alunos[i].nota);
            encontrado = 1;  // Aluno encontrado
            break;  // Saímos do laço, pois já encontramos o aluno
        }
    }

    if (!encontrado) {
        printf("Aluno não encontrado.\n");  // Caso o aluno não tenha sido encontrado
    }

    return 0;
}
