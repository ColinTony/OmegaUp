/*
	Autor: Colin Heredia Luis Antonio
	Versión 1.0
	Descripción: Solucion al problema Alicia y las llaves doradas (OmegaUP)
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int mitad,inf;
	inf = 0;
	mitad = 0;
	char bandera = 'F';

	// arreglo para las puertas correctas
	int *pos;
	int contaResp=0;

	// chapas.
	int M; // numero de chapas
	int* P; // Tamaño de las chapas
	
	// llaves
	int N; // numero de llaves
	int L; // tamaño de llaves

	// mallocs 
	scanf("%d",&M); // numero de chapas
	P = (int*) malloc(M*sizeof(int));
	// poniendo tamaños de chapas
	int i;
	for(i=0; i<M; i++)
		scanf("%d",&P[i]);

	scanf("%d",&N); // numero de llaves
	L = (int*) malloc(N*sizeof(int)); // lista de ints

	pos = calloc(N,sizeof(int));
	// Busqueda binaria
	int supe = M--;
	for(i=0; i<N; i++){
		supe = M--;
		inf=0;
		bandera = 'F';
		scanf("%d",&L[i]); // nos da el valor del tamaño de la llave
		while(inf <= supe) // inferior 0 y superior el numero de chapas
		{	
			mitad = (inf+supe)/2; //sacamos la mitad
			if(P[mitad] == L[i])
			{
				// si el dato se encuentra, entonces la variable mitad
				// guarda la posicion del arreglo.
				bandera = 'V';
				break;
			}else
			{
				if(P[mitad]>L[i]){
					supe = mitad-1;
				} // si el dato ingresado es menor a la mitad del arreglo.
				else{
					inf = mitad+1;
				}
			}
		}

		// verficamos s se encontraron los valroes
		if(bandera == 'F')
		{
			pos[contaResp] = 0;
			contaResp++;
		}else{
			pos[contaResp] = mitad+1;
			contaResp++;
		}
	}

	for(i = 0; i<contaResp; i++)
		printf("%d ",pos[i]);

	return 0;
}