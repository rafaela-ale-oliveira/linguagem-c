#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	/*
		QUESTÃO 01: O IMC (Índice de Massa Corporal) é um critério da Organização Mundial de Saúde para dar uma indicação sobre a 
		condição de peso de uma pessoa adulta. A fórmula é:
		IMC = peso / altura2
		Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a sua condição de acordo com a tabela abaixo:
		IMC em adultos 				Condição
		IMC < 18,5 				Abaixo do peso
		18,5 = IMC < 25,0 		Peso ideal
		25,0 = IMC < 30,0 		Sobrepeso
		30,0 = IMC < 35,0 		Obesidade grau I
		35,0 = IMC < 40,0 		Obesidade grau II
		IMC = 40,0 				Obesidade grau III

	
//PASSO 1- DECLARAR AS VARIÁVEIS
	float peso;
	float altura;
	float imc;
	
//PASSO 2- PEDIR AO USUÁRIO E LER AS VARIÁVEIS
	printf("INSIRA SEU PESO: ");
	scanf("%f",&peso);
	printf("INSIRA SUA ALTURA: ");
	scanf("%f",&altura);
	
//PASSO 3- CALCULAR E EXEBIR O IMC
	imc=peso/(altura*altura);
	printf("o IMC E IGUAL A %.2f \n",imc);
	
//PASSO 4- DETERMINAR AS CONDIÇÕES PARA A TABELA
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
		QUESTÃO 02: Escrever um algoritmo que obtenha o peso de uma pessoa na Terra e o número de um planeta. Ao final, 
		com auxílio da tabela abaixo, calcular o peso desta pessoa no planeta escolhido.
		Número 	Planeta Gravidade 	Relativa g
			1 		Mercúrio 			0,37
			2 		Vênus 				0,88
			3 		Marte 				0,38
			4 		Júpiter 			2,64
			5 		Saturno 			1,15
			6 		Urano 				1,17
		Para calcular o peso no planeta escolhido, utilize a seguinte fórmula:
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
		QUESTÃO 03: As vendas parceladas se tornaram uma ótima opção para os lojistas que, a cada dia, criam novas promoções 
		para tentar conquistar novos clientes. Faça um algoritmo que permita ao lojista informar o preço do produto e receber 
		as seguintes informações:
		a) O valor com 10% de desconto para pagamento à vista;
		b) O valor da prestação para parcelamento sem juros, em 5x;
		c) O valor da prestação para parcelamento com juros, em 10x, com 20% de acréscimo no valor do produto.

//DECLARAR VARIAVEIS
	float preco;
	float desconto;
	float prestacaoSemJuros;
	float prestacaoComJuros;
	
//RECEBER VALOR DO PRODUTO	
	printf("informe o preco: \n");
	scanf("%f",&preco);

//CALCULAR PREÇO COM DESCONTO DE 10% E EXIBIR	
	desconto=0.9*preco;
	printf("o preco com desconto e igual a R$ %.2f \n",desconto);
	
//PESTACAO SEM JUROS 5X	 E EXIBIR
	prestacaoSemJuros=preco/5;
	printf("a prestacao e igual a R$ %.2f\n", prestacaoSemJuros);

//PESTAÇÃO COM JUROS 12X E EXIBIR
	prestacaoComJuros=(1.2*preco)*0.1;
	printf("a prestacao com juros e igual a R$ %.2f \n",prestacaoComJuros);
	
*/

/*
		QUESTÃO 04: Desenvolva um algoritmo que calcule o consumo de combustível de um automóvel em determinada viagem. Para 
		isso, devem ser obtidos: i) o percurso (em quilômetros) da viagem; ii) o número de quilômetros que o carro percorre 
		com um litro de combustível (km/l); e iii) o preço do litro do combustível. Ao final, o algoritmo deve determinar:
		• A quantidade de combustível, em litros, consumida durante a viagem;
		• O custo total de combustível.
	

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
		QUESTÃO 05: O cardápio de uma lanchonete é o seguinte:
					Especificação 		Código  Preço
					Cachorro quente 	100 	3,50
					Bauru simples 		101 	4,50
					Bauru com ovo 		102 	5,20
					Hamburger 			103 	3,00
					Cheeseburger 		104 	4,00
					Refrigerante 		105 	2,50
		Escrever um algoritmo que obtenha o código do item pedido, a quantidade e calcule o valor a ser pago.
		Considere que, a cada execução do algoritmo, somente será calculado o valor relacionado a um item.
	
	
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
		QUESTÃO 06: Escrever um algoritmo que, dados um número inteiro i e três valores a, b e c, apresente os 3 números 
		na ordem definida por i, como descrito abaixo:
		a) i = 1: os três valores em ordem crescente;
		b) i = 2: os três valores em ordem decrescente;
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
