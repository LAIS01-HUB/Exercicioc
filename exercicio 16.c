#include <stdio.h> // Biblioteca para entrada e saída padrão

// Definindo a struct Produto
struct Produto {
    char nome[50];  // Nome do produto (string de até 49 caracteres)
    float preco;    // Preço do produto (usaremos float para valores monetários)
    int quantidade; // Quantidade do produto
};

int main() {
    struct Produto produtos[5]; // Vetor de 5 produtos
    int i;

    // Cadastro dos 5 produtos
    printf("Cadastro de 5 produtos:\n");
    for (i = 0; i < 5; i++) {
        // Leitura do nome, preço e quantidade para cada produto
        printf("Digite o nome do produto %d: ", i + 1);
        scanf(" %49[^\n]", produtos[i].nome); // Lê o nome com espaços

        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco); // Lê o preço (float)

        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &produtos[i].quantidade); // Lê a quantidade (int)

        printf("\n"); // Quebra de linha para melhor visualização
    }

    // Imprimir o total de cada produto (preço x quantidade)
    printf("\n--- Relatório de Produtos ---\n");
    for (i = 0; i < 5; i++) {
        float total = produtos[i].preco * produtos[i].quantidade; // Calcula o total (preço x quantidade)
        printf("Produto: %s\n", produtos[i].nome);
        printf("Preço: %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Total: %.2f\n\n", total); // Exibe o total formatado com 2 casas decimais
    }

    return 0; // Fim do programa
}
