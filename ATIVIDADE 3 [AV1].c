/*********************************************
Atividade no 3 de Algoritmos de Computa��o I - 
		Professor Leonardo Vianna

				[2022/1]

Fazer uma fun��o que determine a quantidade
de algarismos de um n�mero inteiro N.

**********************************************/

#include<stdio.h>

int contarAlgarismos(int numero);	//prot�tipo da fun��o 

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
