/***************************************************
Atividade no 6 de Algoritmos de Computação I - 
		Professor Leonardo Vianna

				[2022/1]

Implementar uma função que, dado um vetor
de inteiros, desloque os valores pares para o
seu início e os ímpares para o final.
***************************************************/

#include<stdio.h>

#define false 1
#define true 0
#define CAP 4

int veirficarPar(int numero);							//protótipo da função
void deslocarElementos(int vetor[], int quantidade);

int main(){

	int vetor[]={8,2,1,6},i;
	deslocarElementos(vetor, CAP);
	
	for(i=0;i<CAP;i++){
		printf("vetor[%d] = %d\n",i, vetor[i]);
	}
	
	return 0;		//função int precisa de retorno inteiro
}
int veirficarPar(int numero){
	
	if(numero%2==0){
		
		return true;
	}else{
		
		return false;
	}
}
void deslocarElementos(int vetor[], int quantidade){
	int i, retorno,j=0,aux;
	for(i=0;i<quantidade;i++){
		retorno=veirficarPar(vetor[i]);
		if(retorno==true){
			aux=vetor[j];
			vetor[j]=vetor[i];
			vetor[i]=aux;
			j++;
		}		
	}	
}




