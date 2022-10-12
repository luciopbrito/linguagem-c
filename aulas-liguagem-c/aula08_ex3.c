#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int qtdShrek = 0, qtdCarros = 0, qtdDragao = 0;
	bool sair = false;
	int voto=0;
	
	while (sair == false) // inicio do loop	
	{
		printf("===============================");
		printf("\n [0] - Fim da Enquente");
		printf("\n [1] - Shrek");
		printf("\n [2] - Carros");
		printf("\n [3] - Como treinar o seu dragao");
		printf("\n\n Qual e a sua opcao: ");
		scanf("%d", &voto);
		system("cls");
		
		switch (voto)
		{
			case 0:
				sair = true;
				break;
			case 1:
				qtdShrek++;
				break;
			case 2:
				qtdCarros++;
				break;
			case 3:
				qtdDragao++;
				break;
			default:
				printf("\nvoto inexistente! Tente de novo\n");
				break;
		}
	}

	printf("\n\n================= resultado ====================");
	printf("\nQuantidade de votos no filme Shrek: %d", qtdShrek);
	printf("\nQuantidade de votos no filme Carros: %d", qtdCarros);
	printf("\nQuantidade de votos no filme Como treinar o seu dragao: %d \n", qtdDragao);
	
	return 0;
}
