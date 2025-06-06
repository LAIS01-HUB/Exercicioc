#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[30], autor[30];
	int ano;
} livro;

livro livros[10];
int numlivro = 0;

void registrarlivros();
void listarlivros2000();
void listarlivros();

int main() {
	int opcao;
	
	do {
		printf("**** Livros ****\n"); 
		printf("1 - Registrar os 8 livros\n");
		printf("2 - Listar todos os livros\n");
		printf("3 - Listar livros antes de 2000\n");
		printf("0 - Sair\n");
		printf("Selecione uma opcao: ");
		scanf("%d", &opcao);
		system("clear"); 

		switch (opcao) {
			case 1:
				registrarlivros();
				break;
			case 2:
				listarlivros();
				break;
			case 3:
				listarlivros2000();
				break;
			case 0:
				printf("Obrigado\n");
				break;
			default:
				printf("Opcao invalida\n");
				break;
		}
		printf("Enter para continuar . . .");
		getchar(); 
		getchar(); 
		system("clear");
	} while (opcao != 0);

	return 0;
}

void registrarlivros() {
	for (int i = 0; i < 8; i++) {
		if (numlivro >= 10) {
			printf("Limite de livros atingido.\n");
			break;
		}
		printf("-- Registrar livro %d --\n", numlivro + 1);
		printf("Nome do livro: ");
		scanf("%s", livros[numlivro].nome);  
		printf("Autor do livro: ");
		scanf("%s", livros[numlivro].autor);
		printf("Ano do livro: ");
		scanf("%d", &livros[numlivro].ano);
		numlivro++;
	}
}

void listarlivros() {
	if (numlivro == 0) {
		printf("Nenhum livro cadastrado.\n");
		return;
	}
	
	printf("Todos os livros cadastrados:\n");
	for (int i = 0; i < numlivro; i++) {
		printf("Livro %d:\n", i + 1);
		printf("Nome: %s\n", livros[i].nome);
		printf("Autor: %s\n", livros[i].autor);
		printf("Ano: %d\n", livros[i].ano);
	}
}

void listarlivros2000() {
	int encontrados = 0;
	printf("Livros cadastrados antes do ano 2000:\n");
	for (int i = 0; i < numlivro; i++) {
		if (livros[i].ano < 2000) {
			printf("Nome: %s\n", livros[i].nome);
			printf("Autor: %s\n", livros[i].autor);
			printf("Ano: %d\n", livros[i].ano);
			encontrados++;
		}
	}
	if (encontrados == 0) {
		printf("Não há livros para mostrar nesta faixa\n");
	}
}