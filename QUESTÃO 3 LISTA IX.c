#include <stdio.h>

/**************************************
QUEST�O 03:
Desenvolver uma fun��o que calcule o n-�simo
termo da sequ�ncia de Fibonacci.
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
	
	printf("Entre com a posi��o do termo da sequencia de fibonacci que deseja decobrir: ");
	scanf("%d", &posicao);
	sequenciaDeFibonacci(posicao);
	
}
