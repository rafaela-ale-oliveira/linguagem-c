/************************************
Atividade no 4 de Algoritmos de Computa��o I - 	
		Professor Leonardo Vianna

				[2022/1]
				
Fazer uma fun��o que permane�a lendo
n�meros reais at� que o usu�rio forne�a o valor
-1. Ao final, retornar a quantidade de valores
lidos e o maior deles.

************************************/

#include<stdio.h>

void lerValores(float numero, int *quantidade, float *maior);	// prot�tipo da fun��o

int main(){
	int quantidade;
	float numero, maior;
	lerValores(numero, &quantidade, &maior);
	printf("A quantidade de valores digitados foi: %d\n\n", quantidade);	
	printf("O maior valor digitado foi: %f", maior);	

}
void lerValores(float numero, int *quantidade, float *maior){
	*quantidade=0;
	*maior=-99999;
	do{
		printf("Entre com um numero: ");
		scanf("%f", &numero);
		(*quantidade)++;
		if(numero>(*maior)){
			*maior=numero;
		}
	}
	while(numero!=-1);
}

