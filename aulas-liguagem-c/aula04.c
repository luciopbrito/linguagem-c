#include <stdio.h>
#include <stdlib.h>

void aula04() {
	printf("Iniciando Programa aula04\n");
	
	int idade;
	int anoatual;
	int anonascimento;
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoatual);
	
	anonascimento = anoatual - idade;		
	
	printf("Oi, Voce nasceu em %d e possui %d anos \n", anonascimento, idade);
	
	system("PAUSE");
}