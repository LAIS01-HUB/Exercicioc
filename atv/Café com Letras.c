#include <stdio.h>

int main() {
	int cliente[7];
	int soma = 0;
	float media;

	for (int i = 0; i < 7; i++) {
		printf("Nota de atendimento, cilente %d (0 a 10): ", i + 1);
		scanf("%d", &cliente[i]);

		while (cliente[i] < 0) {
			printf("Nota invalida! Digite uma nota entre 0 e 10: ");
			scanf("%d", &cliente[i]);
		}

		while (cliente[i] > 10) {
			printf("Nota invalida! Digite uma nota entre 0 e 10: ");
			scanf("%d", &cliente[i]);
		}

		soma += cliente[i];
	}


	media = soma / 7;

	printf("Media das notas: %.2f\n", media);

	if (media >= 8) {
		printf("Atendimento muito bom!\n");
	} else if (media >= 5) {
		printf("Atendimento razoavel.\n");
	} else {
		printf("Atendimento ruim.\n");
	}

	return 0;
}
