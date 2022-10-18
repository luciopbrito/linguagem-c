#include <stdio.h>
#include <stdlib.h>

// programa desenvolvido por Lucio
// montar um programa do jogo jokenPo

int main() {
	int jogador, computador, pontjogador = 0, pontcomputador = 0, notcomputer=0, partida = 0;
	
	do {
		system("cls");
		printf("\n========= JokenPo =========\n\n");
		printf("========= Placar ==========\n");
		printf("Jogador: %d Computaodor: %d\n\n", pontjogador, pontcomputador);
		printf("====== Partidas: %d =========\n\n", partida);
		printf("[0] - Sair do Jogo\n");
		printf("[1] - Pedra\n");
		printf("[2] - Papel\n");
		printf("[3] - Tesoura\n");
		printf("\nJogador, qual e sua opcao: ");
		
		scanf("%d", &jogador);
		
		if (jogador!=0) {
			switch(jogador){
				case 0:
					notcomputer = 1;
					break;
				case 1:
					printf("\n\nO jogador escolheu perda\n");
					break;
				case 2:
					printf("\n\nO jogador escolheu papel\n");
					break;
				case 3:
					printf("\n\nO jogador escolheu Tesoura\n");
					break;
				default:
					printf("\n\nOpcao invalida\n");
					notcomputer = 1;
					break;
			}
		}
		
		if (jogador == 0) {
			notcomputer = 1;
		}
		
		if (notcomputer != 1) {
			notcomputer = 0;
			computador = ("%d", rand()%3 +1);
			switch(computador){
				case 1:
					printf("\n\nO computador escolheu pedra\n");
					break;
				case 2:
					printf("\n\nO computador escolheu papel\n");
					break;
				case 3:
					printf("\n\nO computador escolheu Tesoura\n");
					break;
				default:
					printf("\n\nOpcao invalida\n");
					break;
			}
				
			//resultado
			if (jogador == computador) {
				printf("\n\n==> Empatou!\n\n");
				partida++;
			}else {
				if ((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2)) {
					printf("\n\n==> O jogador ganhou! \n\n");
					pontjogador++;
					partida++;
				} else {
					printf("\n\n==> O computador ganhou\n\n");
					pontcomputador++;
					partida++;
				}
			}
		}
			
		system("PAUSE");
	} while (jogador!=0);
	
	printf("\n\n====== Fim do Jogo =======");
	
	return 0;
}
