#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    char nome[50];
    char sobrenome[50];
    char email[50];
    char telefone[20];
    char CPF[20];
    int tipoQuarto;
} Hotel;

Hotel hotel[30];
int cadsHotel = 0;

void menu();
void fazerCheckIn();
void servicoQuarto();
void pedidoComida();
void finaliza_funcao();

int main(){
    int opcao;
    
    do {
        menu();
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1: 
                fazerCheckIn();
                break;
            
            case 2:
                servicoQuarto();
                break;
            
            case 3:
                pedidoComida();
                break;
            
            case 4:
                printf("\nSaindo... Obrigado(a) pela preferência\n");
                break;
                
                default:
                    printf("\nOpcao Inválida. Tente Novamente.\n");
                    
            
        }
    }while(opcao != 4);
    
    return 0;
}

void menu () {
    printf("Bem Vindo(a) ao Hotel Maravilhas\n");
    printf("Selecione o número de acordo com a opção desejada :\n");
    printf("1 - Fazer check in\n");
    printf("2 - Chamar serviço de quarto\n");
    printf("3 - Fazer pedido\n");
    printf ("4 - Sair\n");
}

void fazerCheckIn(){
    printf("Opção Check in do usuário selecionada\n");
        printf("Informe seu nome:\n");
        scanf("%s", hotel[cadsHotel].nome);
        printf("Informe seu sobrenome:\n");
        scanf("%s", hotel[cadsHotel].sobrenome);
        printf("Informe seu email:\n");
        scanf("%s", hotel[cadsHotel].email);
        printf("Informe seu número de telefone:\n");
        scanf("%s", hotel[cadsHotel].telefone);
        printf("Informe seu CPF:\n");
        scanf("%s", hotel[cadsHotel].CPF);
        printf("Selecione o tipo de quarto desejado:\n");
        printf("1 - Solteiro R$500 (Diária)\n");
        printf("2 - Suíte Comum R$1000 (Diária)\n");
        printf("3 - Suíte Luxuosa R$2500 (Diária)\n");
        scanf("%d", &hotel[cadsHotel].tipoQuarto);
        printf("Tipo de quarto selecionado\n");
        printf("Check in realizado com sucesso! Hotel do Sol All Inclusive agradece sua preferência!\n");
        cadsHotel++;
}

void servicoQuarto () {
    int opcao2;
    char produto[30];
    printf("Opção Serviço de quarto selecionada\n");
        printf("Selecione a opção desejada:\n");
        printf("1 - Limpeza do quarto\n");
        printf("2 - Produto faltante\n");
        scanf("%d", &opcao2);
        if (opcao2 == 1){
            printf("Opção 'Limpeza do quarto' selecionada\n");
             printf("Solicitação concluída com sucesso! Em breve a camareira irá ao seu quarto realizar a limpeza.\n");
        }else if (opcao2 == 2){
            printf("Opção 'Produto faltante' selecionada\n");
            printf("Insira qual é o produto faltante:\n");
            scanf("%s", produto);
            printf("Solicitação concluída com sucesso! Em breve a camareira irá ao seu quarto levar o produto solicitado.\n");
        }
}
        
void pedidoComida () {
    printf("Opção Fazer pedido selecionado\n");
        printf("Informe o prato desejado:\n");
        char comida[20];
        scanf("%s", comida);
        printf("Seu pedido de comida foi realizado com sucesso! Em instantes chegará para você!\n");
    
}

void finaliza_funcao () {
    printf("\nPressione Enter para Continuar");
    getchar () ;
    getchar () ;
    system ("clear");
    
}
        
        