/*********************************************
Atividade no 3 de Algoritmos de Computação I - 
		Professor Leonardo Vianna

				[2022/1]

Fazer uma função que determine a quantidade
de algarismos de um número inteiro N.

**********************************************/

#include<stdio.h>

int contarAlgarismos(int numero);	//protótipo da função 

int main(){
	int n;
	printf("insira o numero: ");
	scanf("%d",&n);
	printf("O NUMERO %d POSSUI %d ALGARISMOS",n, contarAlgarismos(n));	
}
int contarAlgarismos(int numero){
	int quantidade=0;
	do{
		numero/=10;	
		quantidade++;	
	}
	while(numero!=0);
	return quantidade;	
}
