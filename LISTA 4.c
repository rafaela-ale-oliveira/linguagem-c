#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*
		QUESTÃO 01: Faça um programa que leia um número inteiro positivo N e exiba todos os
		múltiplos de Y inferiores a N, onde N e Y são fornecidos pelo usuário.
	
			
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
		QUESTÃO 02: Faça um programa que exiba todos os elementos da seguinte série, assim como a soma destes elementos:
		1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1

	int i=0,j=0,soma=0;
	
	for(i=1,j=50;i<=50,j>=1;i++,j--){
		
		printf("%d, %d, ",i,j);
		soma=soma+i+j;
	}
	printf("\nsoma: %d",soma);	
	*/
	
	/*
		QUESTÃO 03: Joãozinho investiu Q reais em uma aplicação com rendimento fixo de R% ao mês. Pede-se a implementação de
		um programa que calcule o valor (e exiba-o) disponível na conta de Joãozinho após A anos de investimento.

	
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
		QUESTÃO 04: Faça um programa que leia 300 números reais. Ao final, devem ser exibidas as seguintes informações:
		a) A quantidade de valores negativos digitados;
		b) A média dos valores positivos.
	
	
	
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
		QUESTÃO 05: Faça um programa que exiba na tela os 50 primeiros termos da seguinte série: 1, -2, 3, -4, 5, -6 ...
	
	
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
		QUESTÃO 06: Faça um programa que leia um número N inteiro, menor ou igual a 18. Se for maior do que 18, o programa 
		exibirá uma mensagem de erro e terminará a sua execução; caso contrário, deverá exibir os no intervalo de 1 a 99 cujos
		algarismos somem N.
		Exemplo:
		N = 12 Portanto, o programa deve exibir os números que estão no intervalo de 1 a 99, cujosalgarismos somam 12. 
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
		QUESTÃO 07: Uma determinada empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de 
		um novo produto que foi lançado. Para cada pessoa entrevistada foram coletados os seguintes dados: 
		gênero (M ou F) e resposta (G [Gostou] ou N [Não Gostou]). Sabendo-se que foram entrevistadas X pessoas, 
		faça um programa que forneça:
		a) Número de pessoas que gostaram doproduto;
		b) Número de pessoas que não gostaram do produto;
		c) Informação dizendo em que gênero o produto teve uma melhor aceitação.
		
		//declaração de variáveis
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
			
			//verificando se é o menor valor
			if (numero < menor)	
			{
				menor = numero;
			}
		}
		
		//lendo os últimos 50 valores (item c)
		for (i=101;i<=150;i++)
		{
			printf ("%do. valor: ", i);
			scanf ("%f", &numero);
			
			//calculando a soma dos valores para, em seguida, calcular a média
			soma2 += numero;	
		}
		
		//exibindo os resultados
		printf ("\nSoma dos 50 primeiros: %.1f", soma);
		printf ("\nMenor dentre o 51o. ao 100o. valores: %.1f", menor);
		printf ("\nMedia dos ultimos 50 valores: %.1f", soma2/50);

	*/
	
	
	
	
	
	
	
	
	
	
	
}
