#include <stdio.h>
#include <stdlib.h>

int novo_jogo() {
	printf("\n");
	printf("     1  2  3     4  5  6     7  8  9\n");
	printf("  +-----------+-----------+----------+\n");
	for (int i = 0; i < 9; i++) {
		printf("%c |", (65+i));
		for (int j = 0; j < 9; j++) {
			printf(" %2d", j+1);
			if (j == 2 || j == 5) {
				printf("  |");
			}
		}
		printf(" |\n");
		if (i == 2 || i == 5) {
			printf("  +-----------+-----------+----------+\n");
		}
	}
	printf("  +-----------+-----------+----------+\n\n");
}

int main() {
	int opcao;
	printf("\nBem-vindo.\n\n");
	printf("O que deseja fazer?\n\n");
	printf("Menu:\n");
	printf("1 - Novo jogo\n");
	printf("2 - Carregar um jogo salvo\n");
	printf("3 - Excluir um jogo salvo\n");
	printf("4 - Sair\n\n");
	printf("Selecione uma das opcoes acima: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: novo_jogo(); break;
		/*case 2: carregar_jogor(); break;
		case 3: excluir_jogo(); break;*/
		case 4: return 0;
		default: printf("Opcao invalida.\n"); break;
	}
	return 0;
}