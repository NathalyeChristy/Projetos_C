

#include "pch.h"
#include <stdio.h>
#include<stdlib.h>


int inteiro;
float flutuante; //precisao menor numeros reais
double real; //precisao maior 
bool logica; //true or false 

int main()
{

	printf("Hello Word!!\n");

	printf("A\t\tB\t\tC\n");
	printf("A\t\tB\t\tC\n");
	printf("A\t\tB\t\tC\n");
	//variaveis locais

	printf("\n\n ----------------------\n\n");

	int i = 99;
	float d = 100;

	//impressao de numeros inteiros
	printf("%i\n", i );
	//impressao de numeros flutuantes
	printf("%.2f\n", d);

	//textos(string) e valores juntos
	printf("O valor e: %i\nTotal da soma: %i \n",i, i + 5);

	printf("\n\n ----------------------\n\n");

	//calculos
	printf("%i + %i =%i\n", 500, 600, 500 + 600);

	int a = 150;
	int e = 275;

	int f = a + e;

	printf("O resultado da soma e: %i\n", f);

	printf("\n\n ----------------------\n\n");

	//scanf.. scanf_s

	printf("Digite um valor: ");
	scanf_s("%i", &inteiro);

	printf("O valor digitado foi: %i\n", inteiro);


 system("Pause");

	//getchar();

	return 0;

}