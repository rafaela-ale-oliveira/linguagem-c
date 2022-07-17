#include <stdio.h>

/**************************************
QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.
**************************************/

/**************************************
CASO DE TESTE
A=2
B=29
N=3
Saida= 3, 6, 9, 12, 15, 18, 21, 24, 27
**************************************/

void exibirMultiplos(int a, int b, int n){
	
	int i;
	
	for(i=a;i<=b;i++){	
		if(i%n==0){
			printf("%4d ",i);
		}	
	}
	
}

int main(){
	
	int a, b, n;
	
	printf("Entre com o valor inicial do intervalo: ");
	scanf("%d", &a);	
	
	printf("Entre com o valor final do intervalo: ");
	scanf("%d", &b);	
		
	printf("Entre com o valor para exibir os seus multiplos no intervalo: ");
	scanf("%d", &n);	
	
	exibirMultiplos(a, b, n);
}
