/*
	Autor: Colin Heredia Luis Antonio
	Versión 1.0
	Descripción: Solucion al problema Alicia y las llaves doradas (OmegaUP)
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
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
	int j;
	
	for(i=0; i<M; i++)
		scanf("%d",&P[i]);

	scanf("%d",&N); // numero de llaves
	// arreglo para las puertas correctas
	pos = calloc(N,sizeof(int));

	for(i=0; i<N; i++){
		scanf("%d",&L);
		for(j=0; j<M; j++)
		{
			if(L == P[j]) // son iguales los tamñoss
			{
				pos[contaResp] = j+1; 
				contaResp++;
				break;
			}else{
				if(j == (M-1)){
					pos[contaResp] = 0;
					contaResp++;
				}
			}
				
		}
	}
	for(i = 0; i<contaResp; i++)
		printf("%d ",pos[i]);

	return 0;
}