#include<stdio.h>

int main(){
	int i, tamanho=4, elemento;
	int vetor [tamanho];
		
	for(i=0;i<tamanho;i++){							// inserindo elemento em cada posição do vetor
		printf("insira elemento: ");
		scanf("%d", &elemento);
		vetor[i]=elemento;
	}
	for(i=0;i<tamanho;i++){							// teste para exibir vetor
		printf("vetor[%d]\t=\t%d\n",i,vetor[i]);
	}	
}
