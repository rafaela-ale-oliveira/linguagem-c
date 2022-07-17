/*******************************************
Atividade n° 1 de Algoritmos de Computação I - Professor Leonardo Vianna

									[2022/1]
										
Desenvolver uma função que, dado um número
inteiro N, exiba um triângulo como no exemplo
abaixo:

					  1
					1 2 1
				  1 2 3 2 1
				1 2 3 4 3 2 1	
										
*******************************************/

#include<stdio.h>                         	//importar bibliotecas

void exibirTriangulo(int numero);        	//
void sequenciaCrescente(int i);          	//protótipos das funções
void sequenciaDescrescente(int i);       	// 
void tabulacao(int numero, int j);       	//

int main(){                            		//função principal
	int numero;
	printf("Entre com um numero: ");			//lendo valor para a forma do triangulo	
	scanf("%d",&numero); 						
	exibirTriangulo(numero);					// chamando a função para exibir o triangulo
}
void exibirTriangulo(int numero){    		//função para exibir o triangulo
	int i;
	for(i=1;i<=numero;i++){			
		tabulacao(numero,i);           			// 
		sequenciaCrescente(i);         			// chamando as funções
		sequenciaDescrescente(i);     			// 
		printf("\n");		
	}
}
void sequenciaCrescente(int i){      		//função para exibir a metade da sequencia crescente
	int j;
	for(j=1;j<=i;j++){				 			//loop p/ gerar a sequencia crescente por linha
		printf("%d ",j);
	}	
}
void sequenciaDescrescente(int i){    		//função para exubir a metade da sequencia decrescente
	int j;
	for(j=--i;j>=1;j--){              			//loop p/ gerar a sequencia decresente por linha
		printf("%d ",j);
	}	
}
void tabulacao(int numero, int j){     		//função para exibir o espaçamento
	int i;
	j--;
	numero-=j;
	for(i=1;i<numero;i++){            			//loop para gerar o espaçamento em cada linha
		printf("  ");               
	}	
}
