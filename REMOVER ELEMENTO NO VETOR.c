#include<stdio.h>

int main(){
	int i, tamanho=4, elemento, j, aux;
	int vetor []= {10,20,30,40};
	
	for(i=0;i<tamanho;i++){
		printf("vetor[%d]\t=\t%d\n",i,vetor[i]);
	}
	 
	printf("escolha elemento que deseja remover: ");
	scanf("%d", &elemento);
	
	for(i=0;i<tamanho;i++){
		if(elemento == vetor[i]){
			for(j=i;j<tamanho;j++){				
				aux=j;
				aux++;
				printf("i = %d\n", i);
				printf("aux = %d\n", aux);
				printf("j = %d\n", j);
				vetor[j]= vetor[aux];
				printf("\n\n");
			}	
		}
	}
	for(i=0;i<tamanho;i++){
		printf("vetor[%d]\t=\t%d\n",i,vetor[i]);
	}
}
