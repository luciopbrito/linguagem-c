#include <stdio.h>
#include <stdlib.h>

void media() {
	printf("Iniciando Programa media\n");
	
	float nota1, nota2, media = 0;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("A media entre %0.2f e %0.2f e igual a %0.2f\n", nota1, nota2, media);	
	
	system("PAUSE");
}