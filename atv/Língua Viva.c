#include <stdio.h>

int main() {
    int i;
    float nota1, nota2, nota3, nota4, media;

    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);
        printf("Digite a nota 2: ");
        scanf("%f", &nota2);
        printf("Digite a nota 3: ");
        scanf("%f", &nota3);
        printf("Digite a nota 4: ");
        scanf("%f", &nota4);

        media = (nota1 + nota2 + nota3 + nota4) / 4;

        printf("Média: %.2f\n", media);

        if (media >= 6) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}