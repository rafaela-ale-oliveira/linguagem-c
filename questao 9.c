#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
/* 
	Dado um valor inteiro e verificar :
	se ele é positivo e divisivel por 5 e menor que 100:
		exibir uma mensagem
		se não diga um animal
*/

	int x;
	
	printf("insira um numero: ");
	scanf("%d",&x);
	printf("o numero escolhido foi %d\n",x);
	
	if(x%2==0 && x%5==0 && x<100){
		printf("o numero %d preenche os requisitos",x);
	}else{
		printf("vira-lata");
	}
	
	
	
	
	
	
	
	
}
