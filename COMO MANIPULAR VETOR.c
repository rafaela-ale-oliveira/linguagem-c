/***************************************
vetor

O que eu sei sobre vetor?
	o que é um vetor?
		é uma variavel que aloca mais de um valor
	como declarar um vetor
		int vetor [TAM];
	O que é o indice do vetor?
		é a posição de um elemento no vetor


****************************************/
#include<stdio.h>

#define TAM 3

int main(){
	int vetor[TAM],i;	
	for(i=0;i<TAM;i++){					
		printf("Entre com um numero: ");
		scanf("%d",&vetor[i]);
	}
	for(i=0;i<TAM;i++){					
		printf("vetor[%d] = %d <----> endereco de memoria = %d \n", i, vetor[i], &vetor[i]);
	}
}
