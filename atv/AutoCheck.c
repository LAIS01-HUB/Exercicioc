#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char marca[30];
    int ano;
    float km;
} carro;

carro carros[5];

int numcarros = 0;

void registrarCarros();
void listarCarrosAcima100k();

int main() {
    int opcao;
    int contador = 0;

    do {
        printf("1 - Registrar os 5 carros\n");
        printf("2 - Listar carros com mais de 100 mil km\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        system("clear");

        switch (opcao) {
        case 1:
            registrarCarros();
            break;
        case 2:
            listarCarrosAcima100k();
            break;
        case 0:
            printf("Obrigado por utiliza o sistema!\n");
            break;
        default:
            printf("Opcao invalida.\n");
            break;
        }

        printf("Pressione Enter para continuar...");
        getchar();
        getchar();
        system("clear");

    } while (opcao != 0);

    return 0;
}

void registrarCarros() {
    for (int i = 0; i < 5; i++) {
        printf("-- Registro de carro --\n");
        printf("Marca: ");
        scanf("%s", carros[numcarros].marca);
        printf("Ano: ");
        scanf("%d", &carros[numcarros].ano);
        printf("Quilometragem: ");
        scanf("%f", &carros[numcarros].km);
        numcarros++;
    }
}


void listarCarrosAcima100k() {
    printf("--- Carros com mais de 100 mil KM ---\n");
    int encontrou = 0;
    for (int i = 0; i < numcarros; i++) {
    if (carros[i].km > 100000) {
            printf("Marca: %s\n", carros[i].marca);
            printf("Ano: %d\n", carros[i].ano);
            printf("Quilometragem: %.2f km\n\n", carros[i].km);
            encontrou = 1;
        }
    }
if (!encontrou) {
    printf("Nenhum carro com mais de 100000 km encontrado.\n");
}
}