#include <stdio.h>
#include <stdlib.h>

/* receber um numero e mostrar se o numero e positivo, negativo ou neutro */

int main()
{
	float numero = 0;
	
	printf("Digite um numero para descobrir se ele e positivo, negativo ou neutro\n");
	
	scanf("%f", &numero);
	
	if (numero < 0)
	{
		printf("%2.0f e um numero negativo\n", numero);
	}
	else if (numero == 0)
	{
		printf("%2.0f e um numero neutro\n", numero);
	}
	else
	{
		printf("%2.0f e um numero positivo\n", numero);
	}

	system("PAUSE");
	return 0;
}
