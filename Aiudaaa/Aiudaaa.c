/*
	Autor: Colin Heredia Luis Antonio
	Versión 1.0
	Descripción: Solucion al problema Aiidaaaa (OmegaUP)
*/ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	/* code */
	char* cadena;
	char* corta;
	int a=4;
	int contar=0;
	cadena = malloc(sizeof(char) * 150);
	fflush(stdin);
	fgets(cadena,128,stdin);
	while(cadena[a] == 'a'){
		contar++;
		a++;
	}

	printf("%d", contar);
	return 0;
}