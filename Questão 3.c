#include<stdio.h>

int main(){
	
	int num,soma=0,contadorPares=0,i=0, maior=-99999999;
	float media;
/*	
	CASO DE TESTE
	2
	2
	10
	3;
	3
	20
	4
	-1
	5
	5
	10
	30
*/

	printf("insira um numero: ");
	scanf("%d",&num);
	
	while(num!=10){
//	Média de todos os elementos pares lidos antes da ocorrência do 10.	
		if(num%2==0){
			soma+=num;
			contadorPares++;	
		}
		i++;	
		printf("insira um numero: ");
		scanf("%d",&num);	
	}
	while(num!=20){
//	Maior número fornecido entre a ocorrência do 10 e do 20	
		if(maior<num){
			
			maior=num;
		}
		i++;	
		printf("insira um numero: ");
		scanf("%d",&num);
	}
	while(num!=30){

		i++;	
		printf("insira um numero: ");
		scanf("%d",&num);
	}

	if(contadorPares==0){
		printf("nenhum numero par foi encontrado antes do primeiro dez ser digitado\n");
	}else{
		media=(float)soma/contadorPares;
		printf("\n\nmedia dos numeros pares digitados antes do primeiro dez: %.2f\n",media);
	}
	printf("total de numeros digitados: %d\n",++i);// é necessário incrementar mais um no valor poq o TRINTA é um numero digitado mas não estava sendo contado;
	printf("o maior numero entre o primeiro dez digitado e o primeiro vinte posterior: %d",maior);
}
