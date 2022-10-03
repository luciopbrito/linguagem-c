#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade = 35;
	int anoatual = 2018;
	int anonascimento;
	anonascimento = anoatual - idade;	
	
	printf("Oi, Voce nasceu em %d e possui %d anos \n", anonascimento, idade);
	
	system("PAUSE");
	return 0;
}