#include <stdio.h>
#include <stdlib.h>

int novo_jogo() {
	
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
		case 2: carregar_jogor(); break;
		case 3: excluir_jogo(); break;
		case 4: return 0;
		default: printf("Opcao invalida.\n"); break;
	}
	return 0;
}