#include <stdio.h>

int main() {
    int i, opcao, matriculaBusca;
    int matriculas[3];
    float medias[3];
    char nomes[3][50];

    for (i = 0; i < 3; i++) {
        printf("Cadastro do aluno %d:\n", i + 1);
        printf("Digite a matricula: ");
        scanf("%d", &matriculas[i]);
        printf("Digite o nome: ");
        scanf(" %[^\n]", nomes[i]); 
        printf("Digite a media: ");
        scanf("%f", &medias[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1 - Listar todos os alunos\n");
        printf("2 - Mostrar aluno com maior media\n");
        printf("3 - Buscar aluno por matricula\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                for (i = 0; i < 3; i++) {
                    printf("\nAluno %d:\n", i + 1);
                    printf("Matricula: %d\n", matriculas[i]);
                    printf("Nome: %s\n", nomes[i]);
                    printf("Media: %.2f\n", medias[i]);
                }
                break;

            case 2: {
                int indiceMaior = 0;
                for (i = 1; i < 3; i++) {
                    if (medias[i] > medias[indiceMaior]) {
                        indiceMaior = i;
                    }
                }
                printf("\nAluno com maior media:\n");
                printf("Matricula: %d\n", matriculas[indiceMaior]);
                printf("Nome: %s\n", nomes[indiceMaior]);
                printf("Media: %.2f\n", medias[indiceMaior]);
                break;
            }

            case 3:
                printf("Digite a matricula a buscar: ");
                scanf("%d", &matriculaBusca);
                for (i = 0; i < 3; i++) {
                    if (matriculas[i] == matriculaBusca) {
                        printf("\nAluno encontrado:\n");
                        printf("Matricula: %d\n", matriculas[i]);
                        printf("Nome: %s\n", nomes[i]);
                        printf("Media: %.2f\n", medias[i]);
                        break;
                    }
                }
                if (i == 3) {
                    printf("Aluno nao encontrado.\n");
                }
                break;

            case 4:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 4);

    return 0;
}
