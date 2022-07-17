/********************************************************
Atividade no 7 de Algoritmos de Computação I - 
		Professor Leonardo Vianna

				[2022/1]
				
				
Desenvolver uma função que, dado um vetor
de reais e duas posições posI e posF, inverta os
elementos do subvetor definido por essas
posições.
Exemplo:
vetor[] =  {6 5 7 9 2 4 3 5 7 1}
indice      0 1 2 3 4 5 6 7 8 9

posI = 3 posF = 6

Resultado: os elementos das posições 3 a 6
foram invertidos
vetor[] =  {6 5 7 3 4 2 9 5 7 1}
indice		0 1 2 3 4 5 6 7 8 9
********************************************************/

#include<stdio.h>
#define CAP 5

void inverterPosicao(float vetor[], int quantidade, int posicaoA, int posicaoB);			//prototipo da função
void exibirVetor(float vetor[], int quantidade);

int main(){
	float vetor[]={5.1, 6.3, 2.0, 9.5, 8.0};
	int posicaoA,posicaoB;
	
	exibirVetor(vetor, CAP);

	printf("\nentre com a 1 posicao: ");
	scanf("%d", &posicaoA);
	
	printf("entre com a 2 posicao: ");
	scanf("%d", &posicaoB);
	
	inverterPosicao(vetor,  CAP, posicaoA,  posicaoB);
	
	exibirVetor(vetor, CAP);
	
}
void inverterPosicao(float vetor[], int quantidade, int posicaoA, int posicaoB){
	float aux;
	int i;
	for(i=posicaoA;i<posicaoB;i++){
		
	aux=vetor[i];
	vetor[i]=vetor[posicaoB];
	vetor[posicaoB]=aux;
	posicaoB--;
	}
}

void exibirVetor(float vetor[], int quantidade){
	int i;
	for(i=0;i<quantidade;i++){
		printf("vetor[%d] = %.1f\n",i, vetor[i]);
	}	
}





