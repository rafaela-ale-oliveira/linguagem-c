#include <stdio.h>


int main(){
	
//	CASO DE TESTE:
//		192= 1+2+9=12/3=4 	VALIDO
//		10001 				INVALIDO
//		-3 					INVALIDO
//		1524= 1+5+2+4/4=3 	VALIDO
	

	int num,soma=0,resultado,resto,i=0;
	float media;
	
	printf("insira um numero: ");
	scanf("%d",&num);
	
	
	while((num<=0)||(num>10000)){
			
			printf("entre com um numero valido\n");
			printf("insira um numero: ");
			scanf("%d",&num);		

	}
	resultado=num;
	
	while(resultado>0){
		
		resultado=num/10;	
		resto=num%10;
		soma+=resto;
		num=resultado;
		i++;
	}

	media=(float)soma/i;
	
	printf("%.1f",media);
	
}
