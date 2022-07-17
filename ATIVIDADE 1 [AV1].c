/*******************************************
Atividade n� 1 de Algoritmos de Computa��o I - Professor Leonardo Vianna

									[2022/1]
										
Desenvolver uma fun��o que, dado um n�mero
inteiro N, exiba um tri�ngulo como no exemplo
abaixo:

					  1
					1 2 1
				  1 2 3 2 1
				1 2 3 4 3 2 1	
										
*******************************************/

#include<stdio.h>                         	//importar bibliotecas

void exibirTriangulo(int numero);        	//
void sequenciaCrescente(int i);          	//prot�tipos das fun��es
void sequenciaDescrescente(int i);       	// 
void tabulacao(int numero, int j);       	//

int main(){                            		//fun��o principal
	int numero;
	printf("Entre com um numero: ");			//lendo valor para a forma do triangulo	
	scanf("%d",&numero); 						
	exibirTriangulo(numero);					// chamando a fun��o para exibir o triangulo
}
void exibirTriangulo(int numero){    		//fun��o para exibir o triangulo
	int i;
	for(i=1;i<=numero;i++){			
		tabulacao(numero,i);           			// 
		sequenciaCrescente(i);         			// chamando as fun��es
		sequenciaDescrescente(i);     			// 
		printf("\n");		
	}
}
void sequenciaCrescente(int i){      		//fun��o para exibir a metade da sequencia crescente
	int j;
	for(j=1;j<=i;j++){				 			//loop p/ gerar a sequencia crescente por linha
		printf("%d ",j);
	}	
}
void sequenciaDescrescente(int i){    		//fun��o para exubir a metade da sequencia decrescente
	int j;
	for(j=--i;j>=1;j--){              			//loop p/ gerar a sequencia decresente por linha
		printf("%d ",j);
	}	
}
void tabulacao(int numero, int j){     		//fun��o para exibir o espa�amento
	int i;
	j--;
	numero-=j;
	for(i=1;i<numero;i++){            			//loop para gerar o espa�amento em cada linha
		printf("  ");               
	}	
}
