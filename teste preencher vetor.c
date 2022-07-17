#include<stdio.h>

void exibirVetor(int vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("%d \n", vetor[i]);
	}
	printf("\n\n");
}
int main(){
	int vetor[6];
	vetor[0]=0;
	vetor[1]=1;
	vetor[2]=2;
	vetor[3]=3;
	vetor[4]=4;
	vetor[5]=5;
	exibirVetor(vetor, 6);
	
	//vetor 2
	int vetor1[6]={0,1,2,3,4,5};
	exibirVetor(vetor1, 6);
	
	//vetor 3
	int i, vetor2[6];
	for(i=0;i<6;i++){
		vetor2[i]=i;	
	}
	exibirVetor(vetor2, 6);
	
	//vetor 4
	int vetor3[6]={0};
	exibirVetor(vetor3, 6);
}
