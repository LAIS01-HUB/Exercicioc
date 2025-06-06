#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[30], tipo[30];
	int idade;
} Animal;

Animal animal[10];
int numAnimal = 0;

void registrarAnimais();
void listarAnimais5();

int main() {

	int opcao;
	int contador = 0;
	
	
	do {
		printf("1 - registrar os 6 animais\n");
		printf("2 - listar animais de ate 5 anos de idade\n");
		printf("0 - sair\n");
		printf("selecione uma opcao :");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1:
			registrarAnimais();
			break;
		case 2:
			listarAnimais5();
			break;
		case 0:
			printf(" obrigado \n");
			break;
		default:
			printf("opcao invalida \n");
			break;
		}
		printf("Enter para continuar . . .");
		getchar();
		getchar();
		system("clear");
	} while (opcao != 0);

	return 0;
}

void registrarAnimais() {
	for (int i = 0; i < 6; i++) {
		printf(" -- REGISTRO DE ANIMAL -- \n");
		printf("Nome do animal: \n");
		scanf("%s", animal[numAnimal].nome);
		printf("Tipo do animal: \n");
		scanf("%s", animal[numAnimal].tipo);
		printf("Idade do animal: \n");
		scanf("%d", &animal[numAnimal].idade);
		numAnimal++;
	}
}

void listarAnimais5() {
	int encontrados = 0;
	printf("Todos os animais cadastrados de até 5 anos de idade :\n");
	for (int i = 0; i < numAnimal; i++) {
		if (animal[i].idade <= 5) {
			printf(" Nome do animal : %s\n", animal[i].nome);
			printf(" Tipo do animal: %s\n", animal[i].tipo);
			printf(" Idade: %d\n", animal[i].idade);
			encontrados++;
		}
	}
	if (encontrados == 0) {
		printf(" Não há animais maiores de 5 anos\n"); 
	}
}
