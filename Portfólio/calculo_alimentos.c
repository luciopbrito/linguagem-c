#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum animal {Leao = 1, Girafa, Chipanze, Tucano, Hipopotamo } animal;

int main() {
	int op_animal, quant_animais ,leao = 10, girafa = 5, chimpanze = 3, tucano = 2, hipopotamo = 15;
	float cust_estimado, res_quant_por_kilo, res_quant_por_dia, res_quant_por_mes, res_cust_por_mes;
	
	printf("Programa para exibir quantia de alimentos\n\n");
	printf("Escolha o tipo de animal:");
	printf("\n[1] Leao");
	printf("\n[2] Girafa");
	printf("\n[3] Chipanze");
	printf("\n[4] Tucano");
	printf("\n[5] Hipopotamo\n");
	
	scanf("%d", &op_animal);
	
	animal = op_animal;
	
	printf("Quantidade de animais: ");
	scanf("%d", &quant_animais);
	
	printf("Custo estimado por kilo de comida: ");
	scanf("%f", &cust_estimado);
	
	system("cls");
	
	
	switch (animal)	{
		case Leao:
			res_quant_por_kilo = leao;
			res_quant_por_dia = quant_animais * res_quant_por_kilo;
			res_quant_por_mes = res_quant_por_dia * 30;
			res_cust_por_mes = res_quant_por_mes * cust_estimado;
			break;
		case Girafa:
			res_quant_por_kilo = girafa;
			res_quant_por_dia = quant_animais * res_quant_por_kilo;
			res_quant_por_mes = res_quant_por_dia * 30;
			res_cust_por_mes = res_quant_por_mes * cust_estimado;
			break;
		case Chipanze:
			res_quant_por_kilo = chimpanze;
			res_quant_por_dia = quant_animais * res_quant_por_kilo;
			res_quant_por_mes = res_quant_por_dia * 30;
			res_cust_por_mes = res_quant_por_mes * cust_estimado;
			break;
		case Tucano:
			res_quant_por_kilo = tucano;
			res_quant_por_dia = quant_animais * res_quant_por_kilo;
			res_quant_por_mes = res_quant_por_dia * 30;
			res_cust_por_mes = res_quant_por_mes * cust_estimado;
			break;
		case Hipopotamo:
			res_quant_por_kilo = hipopotamo;
			res_quant_por_dia = quant_animais * res_quant_por_kilo;
			res_quant_por_mes = res_quant_por_dia * 30;
			res_cust_por_mes = res_quant_por_mes * cust_estimado;
			break;
		default:
			printf("Opcao nao cadastrada, tente novamente!");
			break;
	}
	
	printf("\nQuantidade de kilo por animal: %2.0f", res_quant_por_kilo);
	printf("\nQuantidade de alimento por dia: %2.0f", res_quant_por_dia);
	printf("\nQuantidade de kilo por mes: %2.0f", res_quant_por_mes);
	printf("\nCusto estimado por mes: %2.0f", res_cust_por_mes);
	return 0;
}
