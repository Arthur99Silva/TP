#include <stdio.h>
#include <stdlib.h>

int main() {
	int opcao;
	printf("\nBem-vindo.\n\n");
	printf("O que deseja fazer?\n\n");
	printf("1 - Novo jogo.\n");
	printf("2 - Carregar um jogo.\n\n");
	printf("Selecione uma das opcoes acima: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: printf("Novo jogo.\n"); break;
		case 2: printf("Carregar um jogo.\n"); break;
		default: printf("Opcao invalida.\n"); break;
	}
	return 0;
}