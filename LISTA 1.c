#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*
		QUESTÃO 01:
		O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos 
		(aplicados ao custo de fábrica). Desenvolver um algoritmo que calcule o custo ao consumidor de determinado carro.


	float custoConsumidor,custoFabrica, x,y;
	
	printf("insira o custo de fabrica: ");
	scanf("%f",&custoFabrica);
	printf("custo de fabrica igual a %.2f\n",custoFabrica);
	
	printf("insira a porcentagem do distribuidor: ");
	scanf("%f",&x);
	printf("a porcentagem do distibuidor e igual a %.2f\n",x);
	
	printf("insira a porcentagem do distribuidor: ");
	scanf("%f",&y);
	printf("a porcentagem do distribuidor e igual a %.2f\n",y);
	
	custoConsumidor= custoFabrica + ((x/100)*custoFabrica)+((y/100)*custoFabrica);
	
	printf("o custo de fabrica e igual a %.2f",custoConsumidor);
	*/
	
	/*
		QUESTÃO 02:
		Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintescategorias:
		Categoria       Faixa de idade
		infantil A       0 - 4 anos
		infantil B       5 - 7 anos
		infantil C       8 - 10 anos
		juvenil A       11 - 13 anos
		juvenil B       14 - 17 anos
		Adulto          18 anos ou mais


	int idade;

	printf("insira uma idade: ");
	scanf("%d",&idade);
	printf("idade escolhida igual a %d\n",idade);

	
	if(idade<0){
		printf("idade invalida");
	}else{
		if(idade <5){
			printf("categoria infantil A");
		}else{
			if(idade < 8){
				printf("categoria infantil B");
			}else{
				if(idade < 11){
					printf("categoria infantil C");
				}else{
					if(idade < 14){
						printf("categoria juvenil A");
					}else{
						if(idade < 18){
							printf("categoria juvenil B");
						}else{
							printf("categoria adulto");												
						}		
					}
				}
			}
		}
	}
	*/	
	/*
		QUESTÃO 03:
		Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu gênero e altura, utilizando as 
		seguintes fórmulas:
		M para homens: (72.7*h)-58
		F para mulheres: (62.1*h)-44.7


	char genero;
	float peso,h;
	
	printf("insira um genero sabendo que:\nm- masculino\nf- feminino\n");
	scanf("%c",&genero);
	printf("seu genero e %c\n",genero);
	printf("insira sua altura\n");
	scanf("%f",&h);
	printf("sua altura e %.2f\n",h);
	
	
	if(genero=='m'){
		peso=(72.7*h)-58;
		printf("seu peso e igual a %.2f",peso);
	}else{
		peso=(62.1*h)-44.7;
		printf("seu peso e igual a %.2f",peso);
	}
	
	*/
	
	/*
		QUESTÃO 04:
		Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. 
		Faça um algoritmo que calcule o valor do crédito de acordo com a tabela abaixo.
		Saldo Médio                                Percentual
		Inferior a R$ 1000,00                     nenhum crédito
		De R$ 1000,00 a R$ 1499,99                20% do saldo médio
		De R$ 1500,00 a R$ 2499,99                30% do saldo médio
		R$ 2500,00 ou mais                        40% do saldo médio
			

	float salario,credito;
	
	printf("insira seu salario: \n");
	scanf("%f",&salario);
	printf("seu salario e igual a R$ %.2f\n",salario);
	
	if(salario<1000.00){
		printf("nao ha credito desponivel\n");
	}else{
		if(salario<1500){
			credito=salario*0.2;
			printf("credito disponivel no valor de R$ %.2f\n",credito);
		}else{
			if(salario<2500){
				credito=0.3*salario;
				printf("credito disponivel no valor de R$ %.2f\n",credito);
			}else{
				credito=0.4*salario;
				printf("credito disponivel no valor de R$ %.2f\n",credito);
			}
		}
	}
	
	*/
	
	/*
		QUESTÃO 05:
		Escrever um algoritmo que, dada uma quantia em reais, calcule o menor número possível de notas/moedas
		(100, 50, 20, 10, 5, 2 e 1) em que o valor pode ser decomposto.


	float valor;
	int nota100,nota50,nota20,nota10,nota5,nota1,resto;
	
	printf("insira um valor: ");
	scanf("%f",&valor);
	
	nota100 = valor/100;
	printf("numero de notas de 100 e igual a %d\n",nota100);
	valor = valor - (nota100*100);
	printf("o resto e igual a %.2f\n",valor);
	
	
	nota50 = valor/50;
	printf("numero de notas de 50 e igual a %d\n",nota50);
	valor = valor - (nota50*50);
	printf("o resto e igual a %.2f\n",valor);
	
	
	nota20 = valor/20;
	printf("numero de notas de 20 e igual a %d\n",nota20);
	valor = valor - (nota20*20);
	printf("o resto e igual a %.2f\n",valor);
	
	nota10 = valor/10;
	printf("numero de notas de 10 e igual a %d\n",nota10);
	valor = valor - (nota10*10);
	printf("o resto e igual a %.2f\n",valor);
	
	nota5 = valor/5;
	printf("numero de notas de 5 e igual a %d\n",nota5);
	valor = valor - (nota5*5);
	printf("o resto e igual a %.2f\n",valor);
	
	nota1 = valor/1;
	printf("numero de notas de 1 e igual a %d\n",nota1);
	valor = valor - (nota1*1);
	printf("o resto e igual a %.2f\n",valor);
	
*/
/*

		QUESTÃO 06:
		Fazer um algoritmo que determine a ordem de uma data (dia e mês) no ano.
		Exemplos:
		01/01 - 1o dia do ano
		03/02 - 34o dia do ano
	
	
	int dia, mes,ordem;
	
	printf("insira uma data dia e mes: ");
	scanf("%d %d",&dia,&mes);
	printf("a data escolida foi %d.%d",dia,mes);
	
	if(mes==1){
		ordem=dia;
		printf("A ordem é igual a %d",ordem);
	}else{
		if(mes==2){
			ordem=31+dia;
			printf("A ordem é igual a %d",ordem);	
		}else{
			if(mes==3){
				ordem=31+28+dia;
				printf("A ordem é igual a %d",ordem);	
			}else{
				if(mes==4){
					ordem=31+28+31+dia;
					printf("A ordem é igual a %d",ordem);	
				}else{
					if(mes==5){
						ordem=31+28+31+30+dia;
						printf("A ordem é igual a %d",ordem);	
					}else{
						if(mes==5){
							ordem=31+28+31+30+dia;
							printf("A ordem é igual a %d",ordem);	
						}else{
							if(mes==6){
								ordem=31+28+31+30+31+dia;
								printf("A ordem é igual a %d",ordem);	
							}else{
								if(mes==7){
									ordem=31+28+31+30+31+30+dia;
									printf("A ordem é igual a %d",ordem);	
								}else{
									if(mes==8){
										ordem=31+28+31+30+31+30+30+dia;
										printf("A ordem é igual a %d",ordem);	
									}else{
										if(mes==9){
											ordem=31+28+31+30+31+30+30+31+dia;
											printf("A ordem é igual a %d",ordem);
										}else{
											if(mes==10){
												ordem=31+28+31+30+31+30+30+31+30+dia;
												printf("A ordem é igual a %d",ordem);
											}else{
												if(mes==11){
													ordem=31+28+31+30+31+30+30+31+30+31+dia;
													printf("A ordem é igual a %d",ordem);
												}else{
													ordem=31+28+31+30+31+30+30+31+30+31+30+dia;
													printf("A ordem é igual a %d",ordem);
												}
											}
										}
									}
								}
							}	
						}	
					}
				}
			}
		}
	}

		*/
		
		/*
		QUESTÃO 07:
		Escreva um algoritmo para calcular o salário semanal de uma pessoa, determinado pelas condições que seguem: 
		se o número de horas trabalhado for inferior ou igual a 40, a pessoa recebe x reais por hora; caso contrário, a
		pessoa recebe um adicional de 50% para cadahora trabalhada acima das 40 iniciais.
	
	
	float h,salarioSemanal,valorPorHora;
	
	printf("insira as horas trabalhadas: ");
	scanf("%f",&h);
	printf("voce trabalhou %.2f horas essa semana\n",h);
	
	printf("insira as valor recebido por hora: ");
	scanf("%f",&valorPorHora);
	printf("voce recebe R$ %.2f por hora trabalhada\n",valorPorHora);
	
	if(h<=40){
		salarioSemanal=valorPorHora*h;
		printf("voce recebeu R$ %.2f essa semana\n",salarioSemanal);
	}else{
		salarioSemanal = (40*valorPorHora)+(1.5*(h-40));
		printf("voce recebeu R$ %.2f essa semana\n",salarioSemanal);
	}
	*/

	/*
	
		QUESTÃO 08:
		Faça um algoritmo para calcular a conta final de um hóspede de um hotel, considerando que:
		a) Devem ser obtidos o nome do hóspede, o tipo do apartamento utilizado (A, B, C ou D), o número de diárias utilizadas 
		pelo hóspede e o valor do consumo interno do hóspede;
		b) O valor da diária é determinado pela seguinte tabela:
		Tipo de Apartamento Valor da diária
		       	A               R$ 350,00
				B 				R$ 275,00
				C 				R$ 200,00
				D 				R$ 150,00
		c) O valor da taxa de serviço equivale a 10% da conta.
		A conta a ser apresentada ao cliente deve conter: o nome do hóspede, o tipo do apartamento, o valor total das diárias, 
		o valor do consumo interno, o subtotal, o valor da taxa de serviço e o total geral.

	char nome[10];
	char tipoAp;
	int diaria;
	float consumo,valorDiaria,valorTD,subtotal,taxa,totalGeral;
	
	printf("Insira seu nome:");
	scanf("%s", &nome);
	printf("nome do hospede: %s\n", nome);
	
	printf("insira o seu tipo de aparatamento:\nTipo   Valor da diária\nA     R$ 350,00\nB     R$ 275,00\nC     R$ 200,00\nD     R$ 150,00\n");
	scanf("%s ", &tipoAp);
	
	if((tipoAp=='a')|| (tipoAp=='A')) {
		valorDiaria=350.00;
	}else{
		if((tipoAp=='b')|| (tipoAp=='B')){
			valorDiaria=275.00;
		}else{
			if((tipoAp=='c')|| (tipoAp=='C')){
				valorDiaria=200.00;
			}else{
				if((tipoAp=='d')|| (tipoAp=='D')){
					valorDiaria=150.00;
				}else{
					printf(" codigo invalido");
				}		
			}
		}
	}
	
	printf("insira a quantidade de diarias: ");
	scanf("%d", &diaria);
	printf("insira o valor do seu consumo interno: ");
	scanf("%f", &consumo);
	valorTD=diaria*valorDiaria;
	subtotal=valorTD+consumo;
	taxa=0.1*subtotal;
	
	printf("tipo de apartamento: %c\nvalor da sua diaria: R$ %.2f\n",tipoAp,valorDiaria);
	printf("numero total de diarias: %d\nvolar total a ser pago pelas diarias: R$ %.2f\nconsumo interno: R$ %.2f\nsubtotal a ser pago: R$ %.2f\ntaxa de servico: R$ %.2f\n",diaria,valorTD,consumo,subtotal,taxa);
	totalGeral=subtotal+taxa;
	printf("Valor total a ser pago: R$ %.2f",totalGeral);

	*/
		
}
