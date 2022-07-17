#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	/*
		QUEST�O 01: O IMC (�ndice de Massa Corporal) � um crit�rio da Organiza��o Mundial de Sa�de para dar uma indica��o sobre a 
		condi��o de peso de uma pessoa adulta. A f�rmula �:
		IMC = peso / altura2
		Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a sua condi��o de acordo com a tabela abaixo:
		IMC em adultos 				Condi��o
		IMC < 18,5 				Abaixo do peso
		18,5 = IMC < 25,0 		Peso ideal
		25,0 = IMC < 30,0 		Sobrepeso
		30,0 = IMC < 35,0 		Obesidade grau I
		35,0 = IMC < 40,0 		Obesidade grau II
		IMC = 40,0 				Obesidade grau III

	
//PASSO 1- DECLARAR AS VARI�VEIS
	float peso;
	float altura;
	float imc;
	
//PASSO 2- PEDIR AO USU�RIO E LER AS VARI�VEIS
	printf("INSIRA SEU PESO: ");
	scanf("%f",&peso);
	printf("INSIRA SUA ALTURA: ");
	scanf("%f",&altura);
	
//PASSO 3- CALCULAR E EXEBIR O IMC
	imc=peso/(altura*altura);
	printf("o IMC E IGUAL A %.2f \n",imc);
	
//PASSO 4- DETERMINAR AS CONDI��ES PARA A TABELA
	if(imc<18.5){
		printf("ABAIXO DO PESO");
	}else{	
		if(imc<25){	
			printf("PESO IDEAL");
		}else{
			if(imc<30){
				printf("SOBREPESO");
			}else{	
				if(imc<35){	
					printf("OBESIDADE GARU I");
				}else{
					if(imc<40){
						printf("OBSIDADE GRAU II");
					}else{
						printf("OBESIDADE GRAU III");
						}
			        }
			    }
			}
		}
	*/
	
	/*
		QUEST�O 02: Escrever um algoritmo que obtenha o peso de uma pessoa na Terra e o n�mero de um planeta. Ao final, 
		com aux�lio da tabela abaixo, calcular o peso desta pessoa no planeta escolhido.
		N�mero 	Planeta Gravidade 	Relativa g
			1 		Merc�rio 			0,37
			2 		V�nus 				0,88
			3 		Marte 				0,38
			4 		J�piter 			2,64
			5 		Saturno 			1,15
			6 		Urano 				1,17
		Para calcular o peso no planeta escolhido, utilize a seguinte f�rmula:
		pesoPlaneta = (pesoTerra/10) * gravidadePlaneta


//DECLARAR VARIAVEIS
	float pesoTerra;
	float gravidadePlaneta;
	float pesoPlaneta;
	int numero;

//LENDO PESO E NUMERO DO PLANETA ESCOLHIDO	
	printf("insira seu peso em kg: ");
	scanf("%f",&pesoTerra);
	printf("escolha um numero de 1 - 6 sabendo que \n 1-mercurio \n 2-venus \n 3-marte \n 4-jupter \n 5-saturno \n 6-urano \n");
	scanf("%d",&numero); 

//CALCULANDO VALOR DA GRAVIDADE DO PANETA ESCOLHIDO	
	if(numero==1){
		gravidadePlaneta=0.37;
		printf("o planeta escolhido foi mercurio \n");
	}else{
		if(numero==2){
			gravidadePlaneta=0.88;
			printf("o planeta escolido foi venus \n");
		}else{
			if(numero==3){
				gravidadePlaneta=0.38;
				printf("o planeta escolido foi marte\n");
			}else{
				if(numero==4){
					gravidadePlaneta=2.64;
					printf("o planeta escolido foi jupter\n");
				}else{
					if(numero==5){
						gravidadePlaneta=1.15;
						printf("o planeta escolido foi saturno\n");
					}else{
						gravidadePlaneta=1.17;
						printf("o planeta escolhido foi urano\n");	
					}
				}
			}
		}
	}
	
//CALCULANDO PESO DA PESSOA NO PLANETA ESCOLHIDO	
	pesoPlaneta = (pesoTerra/10)*gravidadePlaneta;
	printf("seu peso e %.2f kg",pesoPlaneta);
*/	
	
/*
		QUEST�O 03: As vendas parceladas se tornaram uma �tima op��o para os lojistas que, a cada dia, criam novas promo��es 
		para tentar conquistar novos clientes. Fa�a um algoritmo que permita ao lojista informar o pre�o do produto e receber 
		as seguintes informa��es:
		a) O valor com 10% de desconto para pagamento � vista;
		b) O valor da presta��o para parcelamento sem juros, em 5x;
		c) O valor da presta��o para parcelamento com juros, em 10x, com 20% de acr�scimo no valor do produto.

//DECLARAR VARIAVEIS
	float preco;
	float desconto;
	float prestacaoSemJuros;
	float prestacaoComJuros;
	
//RECEBER VALOR DO PRODUTO	
	printf("informe o preco: \n");
	scanf("%f",&preco);

//CALCULAR PRE�O COM DESCONTO DE 10% E EXIBIR	
	desconto=0.9*preco;
	printf("o preco com desconto e igual a R$ %.2f \n",desconto);
	
//PESTACAO SEM JUROS 5X	 E EXIBIR
	prestacaoSemJuros=preco/5;
	printf("a prestacao e igual a R$ %.2f\n", prestacaoSemJuros);

//PESTA��O COM JUROS 12X E EXIBIR
	prestacaoComJuros=(1.2*preco)*0.1;
	printf("a prestacao com juros e igual a R$ %.2f \n",prestacaoComJuros);
	
*/

/*
		QUEST�O 04: Desenvolva um algoritmo que calcule o consumo de combust�vel de um autom�vel em determinada viagem. Para 
		isso, devem ser obtidos: i) o percurso (em quil�metros) da viagem; ii) o n�mero de quil�metros que o carro percorre 
		com um litro de combust�vel (km/l); e iii) o pre�o do litro do combust�vel. Ao final, o algoritmo deve determinar:
		� A quantidade de combust�vel, em litros, consumida durante a viagem;
		� O custo total de combust�vel.
	

//DECLARAR VARIAVEIS
	float percurso;
	float kmGasto;
	float preco;
	float custoTotal;
//LEITURA DE VALORES DE ENTRADA
	printf("informe o percurso em km: \n");
	scanf("%f",&percurso);
	
	printf("informe o preco do combustivel em R$: \n");
	scanf("%f",&preco);
	
	printf("informe a quantidade de combustivel em litros gasto por km: \n");
	scanf("%f",&kmGasto);
//CALCULANDO O TOTAL DE LITROS CONSUMIDOS 	
	custoTotal=(percurso/kmGasto)*preco;
	printf("o custo total da viagem e igual a R$ %.2f",custoTotal);
	
	*/
	/*
		QUEST�O 05: O card�pio de uma lanchonete � o seguinte:
					Especifica��o 		C�digo  Pre�o
					Cachorro quente 	100 	3,50
					Bauru simples 		101 	4,50
					Bauru com ovo 		102 	5,20
					Hamburger 			103 	3,00
					Cheeseburger 		104 	4,00
					Refrigerante 		105 	2,50
		Escrever um algoritmo que obtenha o c�digo do item pedido, a quantidade e calcule o valor a ser pago.
		Considere que, a cada execu��o do algoritmo, somente ser� calculado o valor relacionado a um item.
	
	
//DECLARAR VARIAVEIR	
	int codigo;
	int quant;
	float preco;
	float valorTotal;
//EXIBIR MENU E PEDIR CODIGO
	printf("insira um codigo sabendo que: \n item              codigo        preco      \ncachorro-quente    100         R$3,50\nbauru simples      101         R$4,50\nbauru com ovo      102         R$5,20\nhamburguer         103         R$3,00\ncheesburguer       104         R$4,00\nrefrigerante       105         R$2,50\n");
	scanf("%d",&codigo);
	
//PEDIR QUANTIDADE
	printf("insira a quantidade: ");
	scanf("%d",&quant);
//DETERMINANDO O VALOR DO PRODUTO A APRTIR DO CODIGO	
	if(codigo==100){
		preco=3.50;
	}else{
		if(codigo==101){
			preco=4.50;
		}else{
			if(codigo==102){
				preco=5.20;
			}else{
				if(codigo==103){
					preco=3.00;
				}else{
					if(codigo==104){
						preco=4.00;
					}else{
						preco=2.50;
					}
				}
			}
		}
	}	
//CALCULAR VALOR TOTAL A SER PAGO	
	valorTotal=preco*quant;
	printf("Valor total a ser pago e igual a R$ %.2f",valorTotal);
	*/
	
	/*
		QUEST�O 06: Escrever um algoritmo que, dados um n�mero inteiro i e tr�s valores a, b e c, apresente os 3 n�meros 
		na ordem definida por i, como descrito abaixo:
		a) i = 1: os tr�s valores em ordem crescente;
		b) i = 2: os tr�s valores em ordem decrescente;
		c) i = 3: o maior valor deve ser apresentado no meio dos outros.

	int a,b,c,maior,menor,meio,i;
	
	printf("insira 3 numeros: \n");
	scanf("%d %d %d",&a,&b,&c);
	printf("os numeros escolhidos foram %d %d %d\n",a,b,c);
	
	if((a>b)&&(b>c)){
		maior=a;
		meio=b;
		menor=c;	
	}else{
		if((c>a)&&(a>b)){
			maior=c;
			meio=a;
			menor=b;
		}else{
			if((b>c)&&(c>a)){
				maior=b;
				meio=c;
				menor=a;
			}else{
				if((a>c)&&(c>b)){
				maior=a;
				meio=c;
				menor=b;
				}else{
					if((b>a)&&(a>c)){
					maior=b;
					meio=a;
					menor=c;
					}else{
						if((c>b)&&(b>a)){
						maior=c;
						meio=b;
						menor=a;
						}
					}	
				}	
			}
		}
	}
		
	printf("escolha um numero sabendo que:\n1-ordem crescente\n2-ordem decrescente,\n3-o maior valor entre os outros:\n");
	scanf("%d",&i);	

	if(i==1){
		printf("voce escolheu a ordem cresente: %d %d %d",menor, meio, maior);
	}else{
		if(i==2){
			printf("voce escolheu a ordem decrescente: %d %d %d",maior, meio, menor);
		}else{
			printf("voce escolheu a ordem onde o maior fica no meio: %d %d %d",meio, maior, menor);	
		}
	}	
	*/	
	
}
