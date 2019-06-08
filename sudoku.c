#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu_principal();
int nivel_jogo();
char sudoku();

char sudoku(char novo_jogo[9][9]) {
	int i, j;
	printf("\n");
	printf("     1  2  3     4  5  6     7  8  9\n");
	printf("  +-----------+-----------+----------+\n");
	for (i = 0; i < 9; i++) {
		printf("%c |", (65+i));
		for (j = 0; j < 9; j++) {
			printf(" %2c", novo_jogo[i][j]);
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

int nivel_jogo() {
	srand(time(NULL));
	FILE *arquivo;
	char novo_jogo[9][9];
	int opcao, nivel, i, j;
	printf("\nEscolha o nivel do jogo:\n");
	printf("1 - Facil\n");
	printf("2 - Medio\n");
	printf("3 - Dificil\n");
	printf("4 - Voltar ao Menu Principal\n\n");
	printf("Selecione uma das opcoes acima: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: nivel = rand() % 5;
			switch (nivel) {
				case 0: arquivo = fopen("jogos/novo-jogo/facil/0.txt", "r"); break;
				case 1: arquivo = fopen("jogos/novo-jogo/facil/1.txt", "r"); break;
				case 2: arquivo = fopen("jogos/novo-jogo/facil/2.txt", "r"); break;
				case 3: arquivo = fopen("jogos/novo-jogo/facil/3.txt", "r"); break;
				case 4: arquivo = fopen("jogos/novo-jogo/facil/4.txt", "r"); break;
			}
			break;
		case 2: nivel = rand() % 5;
			switch (nivel) {
				case 0: arquivo = fopen("jogos/novo-jogo/medio/0.txt", "r"); break;
				case 1: arquivo = fopen("jogos/novo-jogo/medio/1.txt", "r"); break;
				case 2: arquivo = fopen("jogos/novo-jogo/medio/2.txt", "r"); break;
				case 3: arquivo = fopen("jogos/novo-jogo/medio/3.txt", "r"); break;
				case 4: arquivo = fopen("jogos/novo-jogo/medio/4.txt", "r"); break;
			}
			break;
		case 3: nivel = rand() % 5;
			switch (nivel) {
				case 0: arquivo = fopen("jogos/novo-jogo/dificil/0.txt", "r"); break;
				case 1: arquivo = fopen("jogos/novo-jogo/dificil/1.txt", "r"); break;
				case 2: arquivo = fopen("jogos/novo-jogo/dificil/2.txt", "r"); break;
				case 3: arquivo = fopen("jogos/novo-jogo/dificil/3.txt", "r"); break;
				case 4: arquivo = fopen("jogos/novo-jogo/dificil/4.txt", "r"); break;
			}
			break;
		case 4: menu_principal(); break;
		default: printf("Opcao invalida.\n"); break;
	}
	if(arquivo == NULL)
		printf("Erro, nao foi possivel abrir o arquivo\n");
	else
		for (i = 0; i < 9; ++i) {
			for (j = 0; j < 9; ++j) {
				fscanf(arquivo, "%c", &novo_jogo[i][j]);
			}
		}
	fclose(arquivo);
	sudoku(novo_jogo);
}

int menu_principal() {
	int opcao;
	printf("\nMenu:\n");
	printf("1 - Novo jogo\n");
	printf("2 - Carregar um jogo salvo\n");
	printf("3 - Excluir um jogo salvo\n");
	printf("4 - Sair\n\n");
	printf("Selecione uma das opcoes acima: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: nivel_jogo(); break;
		/*case 2: carregar_jogor(); break;
		case 3: excluir_jogo(); break;*/
		case 4: return 0;
		default: printf("Opcao invalida.\n"); break;
	}
}

int main() {
	printf("\nBem-vindo!\n\n");
	printf("O que deseja fazer?\n");
	menu_principal();
	return 0;
}