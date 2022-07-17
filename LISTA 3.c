#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	/*
QUEST�O 02:
Fa�a um programa que, dadas duas datas (cada
qual com dia, m�s e ano) fornecidas pelo
usu�rio, determine qual delas � a mais recente.


	int dia1, mes1, ano1, dia2, mes2, ano2;
	
	printf("insira a primeira data dia mes ano:\n");
	scanf("%d %d %d",&dia1,&mes1,&ano1);
	printf("primeira data escolhida: %d %d %d\n",dia1,mes1,ano1);
	
	printf("insira a segunda data dia mes ano:\n");
	scanf("%d %d %d",&dia2,&mes2,&ano2);
	printf("segunda data escolhida: %d %d %d\n",dia2,mes2,ano2);
	
	if(ano1>ano2){
		printf("a data %d %d %d e mais recente que %d %d %d",dia1,mes1,ano1,dia2,mes2,ano2);
	}else{
		if(ano2>ano1){
			printf("a data %d %d %d e mais recente que %d %d %d",dia2,mes2,ano2,dia1,mes1,ano1);
		}else{
			if(mes1>mes2){
				printf("a data %d %d %d e mais recente que %d %d %d",dia1,mes1,ano1,dia2,mes2,ano2);
			}else{
				if(mes2>mes1){
					printf("a data %d %d %d e mais recente que %d %d %d",dia2,mes2,ano2,dia1,mes1,ano1);
				}else{
					if(dia1>dia2){
						printf("a data %d %d %d e mais recente que %d %d %d",dia1,mes1,ano1,dia2,mes2,ano2);
					}else{
						if(dia2>dia1){
							printf("a data %d %d %d e mais recente que %d %d %d",dia2,mes2,ano2,dia1,mes1,ano1);
						}else{
							printf("as datas %d %d %d e %d %d %d sao iguais" ,dia2,mes2,ano2,dia1,mes1,ano1);
						}
					}
				}
			}	
		}
	}
	
	
*/	
	
/*

QUEST�O 03:
Construir um programa que permita ao usu�rio
calcular a �rea de uma figura geom�trica. Para
isto, o usu�rio dever� escolher a figura desejada
([C]�rculo, [R]et�ngulo, [Q]uadrado ou
[T]ri�ngulo) e fornecer as informa��es
necess�rias para que a �rea desta figura possa
ser calculada.
Notas:

1. F�rmulas para o c�lculo das �reas:
a. Ac�rculo = p.raio2, onde p = 3.14159;
b. Aret�ngulo = base.altura;
c. Aquadrado = lado2;
d. Atri�ngulo = (base.altura)/2.

2. Caso o usu�rio escolha uma op��o inv�lida,
uma mensagem de erro deve ser exibida e a
execu��o do programa terminada.	

	*/
	
	#define PI 3.14159;
	
	float  raio, base, altura,lado,area;
	 
	char figura;
	
	printf("escolha uma figura geometrica entre\nc-circulo\nr-retangulo\nq-quadrado\nt-triangulo\n");
	scanf("%c",&figura);
		
	if(figura=='c'){
		printf("figura escolhida: circulo\n");
		printf("insira o raio: ");
		scanf("%f",&raio);
		area= (raio*raio)* PI ;
		printf("a area do circulo e %.5f",area);
	}else{
		if(figura=='r'){
			printf("figura escolhida: retangulo\n");
			printf("insira a base: ");
			scanf("%f",&base);
			printf("insira a altura: ");
			scanf("%f",&altura);
			area= base*altura;
			printf("a area do retangulo e %.2f",area);
		}else{
			if(figura=='q'){
				printf("figura escolhida: quadrado\n");
				printf("insira a lado: ");
				scanf("%f",&lado);
				area= lado*lado;
				printf("a area do quadrado e %.2f",area);
			}else{
				if(figura=='t'){
					printf("figura escolhida: triangulo\n");
					printf("insira a base: ");
					scanf("%f",&base);
					printf("insira a altura: ");
					scanf("%f",&altura);
					area= (base*altura)/2;
					printf("a area do triangulo e %.2f",area);
				}else{
					printf("figura invalida");
				}
			}	
		}
	}
	

	
	
	/*
QUEST�O 04:
Implementar um programa que leia um valor
inteiro n1. Se este n�o estiver no intervalo de
100 a 999, uma mensagem deve ser exibida ao
usu�rio informando que o n�mero � inv�lido e,
em seguida, a execu��o do programa terminar�.
Caso o valor esteja no intervalo definido, o

programa dever� criar um novo valor n2 (e exibi-
lo ao final) contendo os mesmos algarismos de

n1, por�m em ordem crescente.
Exemplos:
n1 514
n2 145
n1 929
n2 299
n1 124
n2 124
Nota:
Como definido no enunciado, n1 consiste em um
n�mero inteiro positivo, com 3 algarismos. n2
tamb�m ser� um �nico n�mero!
	
		
	
	int n1,n2,maior,menor,meio,x1,x2,x3,resul;	
	
	printf("insira um numero: ");
	scanf("%d",&n1);
	printf("numero escolhido: %03d\n",n1);
	
	if((n1>=100)&&(n1<=999)){
		x1=n1%10;
		printf("x1: %d\n",x1);
		resul=n1/10;
		printf("resul: %d\n",resul);
		x2=resul%10;
		printf("x2: %d\n",x2);
		x3=resul/10;
		printf("x3: %d\n",x3);
		if((x1>x2)&&(x2>x3)){
			maior=x1;
			meio=x2;
			menor=x3;
			printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
		}else{
			if((x3>x1)&&(x1>x2)){
				maior=x3;
				meio=x1;
				menor=x2;
				printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
			}else{
				if((x2>x3)&&(x3>x1)){
					maior=x2;
					meio=x3;
					menor=x1;
					printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
				}else{
					if((x3>x2)&&(x2>x1)){
						maior=x3;
						meio=x2;
						menor=x1;
						printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
					}else{
						if((x1>x3)&&(x3>x2)){
							maior=x1;
							meio=x3;
							menor=x2;
							printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
						}else{
							if((x2>x1)&&(x1>x3)){
								maior=x2;
								meio=x1;
								menor=x3;
								printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
							}else{
								if((x2==x1)&&(x1==x3)){
									maior=x2;
									meio=x1;
									menor=x3;
									printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
								}else{
									if((x2==x1)&&(x1>x3)){
										maior=x2;
										meio=x1;
										menor=x3;
										printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
									}else{
										if((x2==x1)&&(x3>x1)){
											maior=x3;
											meio=x1;
											menor=x2;
											printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
										}else{
											if((x3==x1)&&(x3>x2)){
												maior=x3;
												meio=x1;
												menor=x2;
												printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
											}else{
												if((x3==x1)&&(x2>x3)){
													maior=x2;
													meio=x1;
													menor=x3;
													printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
												}else{
													if((x3==x2)&&(x2>x1)){
														maior=x2;
														meio=x3;
														menor=x1;
														printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
													}else{
														if((x3==x2)&&(x1>x2)){
															maior=x1;
															meio=x3;
															menor=x2;
															printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
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
		}
		n2=(menor*100)+(meio*10)+maior;
		printf("n2: %03d",n2);	
	}else{
		printf("numero fora do intervalo");
	}
	*/

}
