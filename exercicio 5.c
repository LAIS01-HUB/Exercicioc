#include <stdio.h> // Biblioteca padrão de entrada e saída

int main() {
    // Declaração das variáveis para os números e o operador
    int num1, num2;
    char operador;

    // Solicita ao usuário que digite o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1); // Lê o primeiro número digitado

    // Solicita ao usuário que digite o operador (+, -, *, /)
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); // Lê o operador (usamos um espaço antes de %c para ignorar espaços anteriores)

    // Solicita ao usuário que digite o segundo número
    printf("Digite o segundo numero: ");
    scanf("%d", &num2); // Lê o segundo número digitado

    // Realiza a operação dependendo do operador
    if (operador == '+') {
        // Se o operador for '+', soma os números
        printf("Resultado: %d\n", num1 + num2);
    } else if (operador == '-') {
        // Se o operador for '-', subtrai os números
        printf("Resultado: %d\n", num1 - num2);
    } else if (operador == '*') {
        // Se o operador for '*', multiplica os números
        printf("Resultado: %d\n", num1 * num2);
    } else if (operador == '/') {
        // Se o operador for '/', divide os números, verificando se o segundo número é diferente de zero
        if (num2 != 0) {
            printf("Resultado: %.2f\n", (float)num1 / num2); // Conversão para float para exibir resultado decimal
        } else {
            // Se o segundo número for zero, exibe uma mensagem de erro
            printf("Erro: Divisao por zero!\n");
        }
    } else {
        // Se o operador não for válido
        printf("Operador invalido!\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}
