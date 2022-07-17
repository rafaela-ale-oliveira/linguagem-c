/**************************************************
Atividade no 8 de Algoritmos de Computa��o I - 
		Professor Leonardo Vianna

				[2022/1]	

Desenvolver uma fun��o que, dado um vetor
de reais, determine o n�mero de valores
distintos no vetor.
Exemplo:

vetor[]  = 		{	9 5 7 5 2 4 7 1 9 2		}
indice ------->		0 1 2 3 4 5 6 7 8 9
					
Resultado: a fun��o retornar� o n�mero 6 (pois
o vetor possui 6 n�meros distintos: 9, 5, 7, 2, 4,
1).

**************************************************/

#include<stdio.h>
#define CAP 10

int elementosDistintos(float vetor[], int quantidade);				//prot�tipo da fun��o

int main(){
	float vetor[]={9, 5, 7, 5, 2, 4, 7, 1, 9, 2};
	int numeroDistinto;
	
	numeroDistinto=elementosDistintos(vetor, CAP);
	printf("A quantidade de elementos distintos no vetor e %d", numeroDistinto);
	
	
}
int elementosDistintos(float vetor[], int quantidade){
	int i,j,aux, contador=0;
	
	for(i=0;i<quantidade;i++){
		aux=0;
		for(j=i+1;j<quantidade;j++){
			if(vetor[i]==vetor[j]){
				aux++;
				break;
			}
		}
		if(aux==0){
			contador++;
		}	
	}
	//printf("contador = %d", contador); 
	return contador;
}
