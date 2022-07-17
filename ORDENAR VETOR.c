// metodo de seleção NÃO PODE SER USADO

#include<stdio.h>


int main(){
	
	int i, tamanho=4, j, menor, troca, posicao;
	int vetor []= {30,20,40,10};
	
	for(i=0;i<tamanho;i++){							// condição inicial do vetor
		printf("vetor[%d]\t=\t%d\n",i,vetor[i]);
	}
	for(i=0;i<tamanho;i++){
//		printf("rodada %d", i);
//		printf("\n\n");
		menor=999999999;
		for(j=i;j<tamanho;j++){
			if(menor>vetor[j]){
				menor=vetor[j];
				posicao=j;			//20		
			}
		}
//		printf("vetor[%d] = %d\n",i, vetor[i]);
//		printf("vetor[%d] = %d\n",posicao, vetor[posicao]);
		troca=vetor[i];
//		printf("troca = %d\n",troca);
//		printf("menor = %d\n",menor);
		vetor[i]=menor;
		vetor[posicao]=troca;
//		printf("vetor[%d] = %d\n",i, vetor[i]);
//		printf("vetor[%d] = %d\n",posicao, vetor[posicao]);	
	}
	printf("\n\n");
	for(i=0;i<tamanho;i++){							// condção final do vetor
		printf("vetor[%d]\t=\t%d\n",i,vetor[i]);
	}
//	printf("\n\n");
}
