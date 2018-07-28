/*
	Autor: Colin Heredia Luis Antonio
	Versión 1.0
	Solicitar al usuario una cantidad indeterminada de números, teminar la solicitud cuando sea 0. Desplegar al final la suma de los números tecleados.
*/ 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int fin =1;
	int suma = 0;
	do
	{
		scanf("%d",&fin);
		suma = suma +fin;
	}while(fin != 0);
	printf("%d",suma);
	return 0;
}