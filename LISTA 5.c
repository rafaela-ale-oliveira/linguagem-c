#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*
		QUEST�O 01: Dado um n�mero inteiro N, fazer um programa que exiba os n�meros pares iguais ou inferiores a N.
	

	int n, i;

	printf("entre com N: ");
	scanf("%d",&n);

	for(i=1;i<n;i++){
		
		if(i%2==0){
			printf("%d, ",i);
		}	
	}
	*/
	/*
		QUEST�O 02: Desenvolver um programa que calcule a soma dos n�meros de 1 a N, sendo N um n�mero inteiro fornecido 
		pelo usu�rio.

	int n, i,soma=0;

	printf("entre com N: ");
	scanf("%d",&n);

	for(i=1;i<n;i++){
		
		soma+=i;
		}
	printf("soma: %d ",soma);
	*/	
	/*
		QUEST�O 03: Fazer um programa que exiba todos os divisores de um n�mero fornecido pelo usu�rio.
	
	
	int n, i;

	printf("entre com N: ");
	scanf("%d", &n);

	for(i=1;i<=n;i++){
		if(n%i==0){
			printf(" %d ",i);	
		}
		
	}
	*/
	/*
		QUEST�O 04: Implementar um programa que exiba os N primeiros termos de uma PA (Progress�o Aritm�tica) 
		com primeiro termo a1 e raz�o r.
		
			//declara��o de vari�veis
		int i, n, a1, r, termo;
		
		//lendo os dados de entrada
		printf ("Entre com o primeiro termo: ");
		scanf ("%d", &a1);
		
		printf ("Entre com a razao: ");
		scanf ("%d", &r);
		
		printf ("Entre com a quantidade de termos: ");
		scanf ("%d", &n);
		
		//exibindo os valores da PA
		for (i=1, termo=a1;i<=n;i++)
		{
			printf ("%d ", termo);
			
			//calculando o valor do pr�ximo termo da PA
			termo=termo+r;
		}	
	*/
	
	/*
	QUEST�O 05: Criar um programa que exiba os N primeiros termos da seguinte s�rie: 1,2,4,8,16,32,...
	
	
	int n, i;

	printf("entre com N: ");
	scanf("%d",&n);

	for(i=1;i<=n;i*=2){
		
		printf("%d ",i);
		
	}
	*/	
	/*
	QUEST�O 06: Criar um programa que exiba os N primeiros termos da seguinte s�rie: 1,2,8,64,1024,...
	
	
	int n, i;

	printf("entre com N: ");
	scanf("%d",&n);

	for(i=1;i<=n;i+=i){
		
		printf("%d ",i);
		
	}
	*/	
}
