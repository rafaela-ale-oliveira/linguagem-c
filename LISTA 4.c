#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*
		QUEST�O 01: Fa�a um programa que leia um n�mero inteiro positivo N e exiba todos os
		m�ltiplos de Y inferiores a N, onde N e Y s�o fornecidos pelo usu�rio.
	
			
	int i,N,Y;
	
	printf("insira N: ");
	scanf("%d",&N);
	printf("insira Y: ");
	scanf("%d",&Y);
	
	for(i=1;i<N;i++){
		
		if(Y%i==0){
			printf("%d, ",i*8);
		}
	}
	
	*/
	/*
		QUEST�O 02: Fa�a um programa que exiba todos os elementos da seguinte s�rie, assim como a soma destes elementos:
		1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1

	int i=0,j=0,soma=0;
	
	for(i=1,j=50;i<=50,j>=1;i++,j--){
		
		printf("%d, %d, ",i,j);
		soma=soma+i+j;
	}
	printf("\nsoma: %d",soma);	
	*/
	
	/*
		QUEST�O 03: Jo�ozinho investiu Q reais em uma aplica��o com rendimento fixo de R% ao m�s. Pede-se a implementa��o de
		um programa que calcule o valor (e exiba-o) dispon�vel na conta de Jo�ozinho ap�s A anos de investimento.

	
	float valorInicial, valorFinal, rendimento;
	int ano,i=1,meses;
	
	printf("entre com o valor do investimento: ");
	scanf("%f",&valorInicial);
	printf("valor inicial: R$ %.2f\n\n",valorInicial);
	
	valorFinal=valorInicial;
	
	printf("entre com o valor do rendimento: ");
	scanf("%f",&rendimento);
	printf("rendimento fixo: %.2f por cento \n\n",rendimento);
	
	printf("entre com o tempo em anos: ");
	scanf("%d",&ano);
	printf("tempo de investimento: %d anos\n\n",ano);
	
	meses=(ano*12);
	
	for(i=1;i<=meses;i++){
		
		valorFinal= valorFinal*(rendimento/100)+valorFinal;
			
	}
	printf("valorFinal: R$ %.2f em %d anos",valorFinal,ano);
	
	*/
	
	/*
		QUEST�O 04: Fa�a um programa que leia 300 n�meros reais. Ao final, devem ser exibidas as seguintes informa��es:
		a) A quantidade de valores negativos digitados;
		b) A m�dia dos valores positivos.
	
	
	
	float N,soma;
	int i,negativo=0,positivo=0;
	
	for(i=1;i<=300;i++){
		
		printf("entre com um numero: ");
		scanf("%f",&N);
		if(N<0){
			negativo++;
		}else{
			positivo++;
			soma+=N;
		}
		
	}
	
	printf("negativo: %d\n", negativo);
	printf("media dos positivos: %.2f",soma/positivo);
	*/
	/*
		QUEST�O 05: Fa�a um programa que exiba na tela os 50 primeiros termos da seguinte s�rie: 1, -2, 3, -4, 5, -6 ...
	
	
	int i;
	
	for(i=1;i<=50;i++){
		if(i%2==0){
			printf("%d, ",i*(-1));
		}else{
			printf("%d, ",i);
		}			
	}
	*/

	/*
		QUEST�O 06: Fa�a um programa que leia um n�mero N inteiro, menor ou igual a 18. Se for maior do que 18, o programa 
		exibir� uma mensagem de erro e terminar� a sua execu��o; caso contr�rio, dever� exibir os no intervalo de 1 a 99 cujos
		algarismos somem N.
		Exemplo:
		N = 12 Portanto, o programa deve exibir os n�meros que est�o no intervalo de 1 a 99, cujosalgarismos somam 12. 
		Ou seja: 39, 48, 57, 66, 75, 84 e 93.

	
	int N,i,dezena,unidade,soma;
	
	printf("Entre com um numero: ");
	scanf("%d",&N);
	printf("intervalo: ");
	if(N>=18){
		printf("numero escolido fora do intervalo");
	}else{
		for(i=1;i<100;i++){
			dezena=i/10;
			unidade=i%10;
			soma=dezena+unidade;
			if(soma==N){
				printf(" %d, ",i);
			}	
		}
	}
	*/
	/*
		QUEST�O 07: Uma determinada empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou n�o de 
		um novo produto que foi lan�ado. Para cada pessoa entrevistada foram coletados os seguintes dados: 
		g�nero (M ou F) e resposta (G [Gostou] ou N [N�o Gostou]). Sabendo-se que foram entrevistadas X pessoas, 
		fa�a um programa que forne�a:
		a) N�mero de pessoas que gostaram doproduto;
		b) N�mero de pessoas que n�o gostaram do produto;
		c) Informa��o dizendo em que g�nero o produto teve uma melhor aceita��o.
		
		//declara��o de vari�veis
		int i;
		float numero, soma = 0, soma2 = 0, menor = INT_MAX;
		
		//lendo os primeiros 50 valores (item a)
		for (i=1;i<=50;i++)
		{
			printf ("%do. valor: ", i);
			scanf ("%f", &numero);
			
			//calculando a soma
			soma += numero;
		}
		
		//lendo o segundo grupo de 50 valores (item b)
		for (i=51;i<=100;i++)
		{
			printf ("%do. valor: ", i);
			scanf ("%f", &numero);	
			
			//verificando se � o menor valor
			if (numero < menor)	
			{
				menor = numero;
			}
		}
		
		//lendo os �ltimos 50 valores (item c)
		for (i=101;i<=150;i++)
		{
			printf ("%do. valor: ", i);
			scanf ("%f", &numero);
			
			//calculando a soma dos valores para, em seguida, calcular a m�dia
			soma2 += numero;	
		}
		
		//exibindo os resultados
		printf ("\nSoma dos 50 primeiros: %.1f", soma);
		printf ("\nMenor dentre o 51o. ao 100o. valores: %.1f", menor);
		printf ("\nMedia dos ultimos 50 valores: %.1f", soma2/50);

	*/
	
	
	
	
	
	
	
	
	
	
	
}
