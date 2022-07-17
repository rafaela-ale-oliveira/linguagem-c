#include <stdio.h>

/**************************************
QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.
**************************************/

/**************************************
CASO DE TESTE
N= 6
Saida= 8
**************************************/

void sequenciaDeFibonacci(int num){
		
		int contador=1, soma=1, i=0, j=1;
		while(contador<num){
		soma=i+j;
		i= j;
		j= soma;
		contador++;
	}
	printf("%4d ",soma);		
}

int main(){
	
	int posicao;
	
	printf("Entre com a posição do termo da sequencia de fibonacci que deseja decobrir: ");
	scanf("%d", &posicao);
	sequenciaDeFibonacci(posicao);
	
}
