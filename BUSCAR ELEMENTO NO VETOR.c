#include<stdio.h>

int main(){
	int i, tamanho=4, elemento, retorno;
	int vetor []= {10,20,30,40};
	
	printf("insira elemento: ");
	scanf("%d", &elemento);
	retorno = 	buscarElemento(vetor,tamanho,elemento);
	printf ("%d", retorno);
}
int buscarElemento(int vetor[], int tamanho, int elemento){
	int i;
	for(i=0;i<tamanho;i++){
	if(elemento == vetor[i]){
		printf("o elemento %d esta na posicao %d\n",elemento, i);
		return 0;
	}			
}
return (-1);
}
