/*****************************************************
Atividade no 5 de Algoritmos de Computa��o I -
		 Professor Leonardo Vianna

				[2022/1]	
	
Implementar uma fun��o que, dado um vetor
de inteiros, determine se os seus elementos
formam uma Progress�o Geom�trica (PG).	
	
*******************************************************/	
/******************************************************	
	a2:a1= Q; // funcionando
	se an * Q	 != a(n+1)				//Logica
	N�O � UMA PG

*******************************************************/

#include<stdio.h>									//importar biblioteca 

#define CAP 5										//constante						
#define false 1
#define true 0

int verificarPG(int vetor[]);						//prot�tipo da fun��o

int main(){											//fun��o principal
	
//	indice ------>	0, 1,  2,  3,  4
	int vetor[CAP]={30,90,270,810,2430}, pg;	

	pg =verificarPG(vetor);
	if(pg==false){
		printf("\n\nOs elementos do vetor nao formam uma PG");
	}else{
		printf("\n\nOs elementos do vetor formam uma PG");
	}
	
}
int verificarPG(int vetor[]){		//fun��o para verificar se o vetor tem uma PG 
	int i=0, j=1, q;
//		2� termo   1� termo	
	q=  vetor[j] / vetor[i];
	printf("razao = %d",q);	

//	printf("\n\n1 termo = %d",vetor[i]);
//	printf("\n\n2 termo = %d",vetor[j]);		//teste
	
	for(j=1;j<CAP;j++){
//		se   an    *q  !=  a(n+1)		
		if(vetor[i]*q != vetor[j]){
			
			return false;
		}
		i++;	
	}	
	return true;
}
