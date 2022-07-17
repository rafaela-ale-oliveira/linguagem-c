#include <stdio.h>
#include <stdlib.h>

int main(){

/*
		Questão 01 [2,0 pontos]:
		Dado o programa abaixo escrito na linguagem C, apresentar tudo que é exibido ao usuário durante a sua execução.
		Nota: para a resolução desta questão, não é permitida a consulta a qualquer tipo de material, assim como não pode 
		ser utilizado o computador.
		
	int A, B, i;
	float C;
	
	A = 9; B = 0; C = (A-B)/2;
	
	for (i=1;i<3;i++) {
		if (A > i){
		A -= 2;
		B++;
		i--;
		}else{
		while (B > 0){
		B--;
		C = (A-B)/2;
		A++;
		}
	}
		printf ("A = %d\n", A);
		printf ("B = %d\n", B);
		printf ("C = %.1f\n", C);
		printf ("i = %d\n\n", i);
	}

*/
/*
		Questão 02 [2,0 pontos]:
		Faça um programa que escreva um ano, fornecido pelo usuário, por extenso. Caso o ano seja inválido (não pertencente 
		ao intervalo de 1 a 2017), uma mensagem de erro deve ser gerada. Exemplos:
		1889 – mil e oitocentos e oitenta e nove
		2030 – ano inválido


	int ano,resto;
	
	printf("insira ano: ");
	scanf("%d",&ano);

	if((ano>0)&&(ano<2023)){

		switch(ano/1000){
			case(1):
				if(ano%1000==0){
					printf("mil");
				}else{
					printf("mil e ");
				}
				resto=ano%1000;
			break;
			case(2):
				if(ano%1000==0){
					printf("dois mil");
				}else{
					printf("dois mil e ");
				}
				resto=ano%1000;
			break;
			default:
				resto=ano%1000;
		}
		switch(resto/100){
			case(1):
				if(resto%100==0){
					printf("cem");
				}else{
					printf("cento e ");
				}
				resto=resto%100;
			break;
			case(2):
				if(resto%100==0){
					printf("duzentos");
				}else{
					printf("duzentos e ");
				}
				resto=resto%100;
			break;
			case(3):
				if(resto%100==0){
					printf("trezentos");
				}else{
					printf("trezentos e ");
				}
				resto=resto%100;
			break;
			case(4):
				if(resto%100==0){
					printf("quatrocentos");
				}else{
					printf("quatrocentos e ");
				}
				resto=resto%100;
			break;
			case(5):
				if(resto%100==0){
					printf("quinhentos");
				}else{
					printf("quinhentos e ");
				}
				resto=resto%100;
			break;	
			case(6):
				if(resto%100==0){
					printf("seiscentos");
				}else{
					printf("seiscentos e ");
				}
				resto=resto%100;
			break;	
			case(7):
				if(resto%100==0){
					printf("setecentos");
				}else{
					printf("setecentos e ");
				}
				resto=resto%100;
			break;
			case(8):
				if(resto%100==0){
					printf("oitocentos");
				}else{
					printf("oitocentos e ");
				}
				resto=resto%100;
			break;
			case(9):
				if(resto%100==0){
					printf("novecentos");
				}else{
					printf("novecentos e ");
				}
				resto=resto%100;
			break;
			default:
				resto=ano%100;
		}
		switch(resto/10){
			case(1):
				if(resto%10==0){
					printf("dez");		
				}else if(resto%10==1){
					printf("onze");	
				}else if(resto%10==2){
					printf("doze");	
				}else if(resto%10==3){
					printf("treze");	
				}else if(resto%10==4){
					printf("quatorze");	
				}else if(resto%10==5){
					printf("quinze");	
				}else if(resto%10==6){
					printf("dezesseis");
				}else if(resto%10==7){
					printf("dezessete");	
				}else if(resto%10==8){
					printf("dezoito");	
				}else if(resto%10==9){
					printf("dezenove");	
				}
			break;									
			case(2):
				if(resto%10==0){
					printf("vinte");
				}else{
					printf("vinte e ");
				}
				resto=resto%10;
			break;
			case(3):
				if(resto%10==0){
					printf("trinta");
				}else{
					printf("trinta e ");
				}
				resto=resto%10;
			break;
			case(4):
				if(resto%10==0){
					printf("quarenta");
				}else{
					printf("quarenta e ");
				}
				resto=resto%10;
			break;
			case(5):
				if(resto%10==0){
					printf("cinquenta");
				}else{
					printf("cinquenta e ");
				}
				resto=resto%10;
			break;	
			case(6):
				if(resto%10==0){
					printf("sessenta");
				}else{
					printf("sessenta e ");
				}
				resto=resto%10;
			break;	
			case(7):
				if(resto%10==0){
					printf("setenta");
				}else{
					printf("setenta e ");
				}
				resto=resto%10;
			break;
			case(8):
				if(resto%10==0){
					printf("oitenta");
				}else{
					printf("oitenta e ");
				}
				resto=resto%10;
			break;
			case(9):
				if(resto%10==0){
					printf("noventa");
				}else{
					printf("noventa e ");
				}
				resto=resto%10;
			break;
			default:	
				resto=ano%10;
		}
		switch(resto){
			case(1):
				printf("um");
			break;
			case(2):
				printf("dois");
			break;
			case(3):
				printf("tres");
			break;
			case(4):
				printf("quatro");
			break;
			case(5):
				printf("cinco");
			break;
			case(6):
				printf("seis");
			break;
			case(7):
				printf("sete");
			break;
			case(8):
				printf("oito");
			break;
			case(9):
				printf("nove");
			break;	
		}
	}else{
		printf("ano invalido");
	}
	
*/	
/*
		Questão 03 [2,0 pontos]:
		Dados dois números inteiros A e B, fornecidos pelo usuário, exibir todos os valores de 1 a B, exceto os divisores de 
		A que deverão ser substituídos pelo caracter #.
		

	int A, B, i;

	printf("entre com o valor de A: ");
	scanf("%d",&A);
	printf("entre com o valor de B: ");
	scanf("%d",&B);
	
	for(i=1;i<=B;i++){
		if(i%A==0){
			printf("#,");
		}else{
			printf("%d,",i);
		}

	}	
*/

/*
		Questão 04 [2,0 pontos]:
		Desenvolver um programa que exiba todos os números perfeitos existentes no intervalo de 1 a N, onde N é
		fornecido pelo usuário. Nota: um número N é dito perfeito quando a soma de seus divisores, excetuando o próprio N, 
		é igual a N. Por exemplo, o número 6 é perfeito, pois a soma de seus divisores (1+2+3+6 = 6). Da mesma forma, 28
		é perfeito, pois 1+2+4+7+14+28 = 28.
			
	int N,i,divisor,soma=0;
	
	printf("insira N: ");
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
	    divisor=1;
		soma=0;	
		while(divisor<i){
			if(i%divisor==0){
	            soma+=divisor;  
			}
			divisor++;
		}
		if(soma==i){
			printf("%d, ",soma);
		}
	}
*/
/*
		Questão 05 [2,0 pontos]:
		Uma pesquisa foi realizada para saber a área de interesse de um grupo de pessoas para ingressarem em um curso de 
		graduação. Para isto, cada entrevistado forneceu os seguintes dados: sexo (M ou F), idade e área de interesse 
		(1 – Biomédica, 2 – Humanas ou 3 –Exatas). Pede-se o desenvolvimento de um programa que leia estes dados 
		(até que o usuário opte por terminar a leitura) e informe, ao final:
		- Área mais escolhida pelos entrevistados de 16 a 24 anos;
		- Área mais escolhida pelos homens;
		- Média de idade das pessoas que preferem Exatas;
		- Percentual de mulheres em cada área.
*/

	int idade, area, exit;
	char sexo;
	float media;
	
	do{
		printf("insira idade: ");
		scanf("%d",&idade);
		printf("insira genero:\n");
		printf("M-mulher\n");
		printf("H-homem\n");
		scanf("%c",&sexo);
		printf("ecolha area:\n");
		printf("1- Biomédica\n");
		printf("2- Humanas\n");
		printf("3- Exatas\n");
		scanf("%d",&area);
		printf("insira 0 para encerrar ou aperte qualquer numero para seguir:");
		scanf("%d",&exit);
	
	}while(exit!=0);









}



