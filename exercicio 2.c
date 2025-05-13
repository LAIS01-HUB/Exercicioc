#include <stdio.h>

int main() {
    int num1, num2;  // Declara duas variáveis inteiras

    // Solicita os dois números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);  // Lê o primeiro número

    printf("Digite o segundo número: ");
    scanf("%d", &num2);  // Lê o segundo número

    // Compara os dois números
    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %d\n", num2);
    } else {
        printf("Os dois números são iguais.\n");
    }

    return 0;  // Finaliza o programa
}
