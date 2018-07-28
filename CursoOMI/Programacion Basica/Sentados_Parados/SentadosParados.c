/*
	Autor: Colin Heredia Luis Antonio
	Versión 1.0
*/ 
#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int filas;
	unsigned int asientos;
	unsigned int boletos;
	unsigned int totalAsientos;

	scanf("%d%d",&filas,&asientos);
	if(filas>=0 && filas<=10000)
	{
		if(asientos>=0 && asientos<=10000){
			scanf("%d",&boletos);
			if(boletos>=0 && boletos<=1000000000)
			{
				totalAsientos = filas*asientos;
				if(boletos == 0)
				{
					printf("%i %i",totalAsientos,0);
					return 0;
				}
				printf("%i %i",totalAsientos,(boletos - totalAsientos));
			}
		}
	}
	return 0;
}