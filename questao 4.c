#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
/* 
	questão 4: leia um numero inteiro, verificar se é par ou impar: 
	Se for par:
		fazer o dobro de n
		fazer a divisão do n por 2
		somar o dobro do numero e o valor original
		exibir todos as informação 
	Se for impar:
		fazer o triplo
		dividir por 5
		verificar se é multiplo de 9
		exibir todas as informações
*/
	
	int x;
	float y,z;
	
	
	printf("insira um numero: ");
	scanf("%d",&x);
	
		if(x%2==0){
		printf("o numero escolhido foi %d e ele e par\n",x);
		y=x/2;
		printf("%d dividido por 2 e igual a %.2f\n",x,y);
		z=(2*x)+x;
		printf("%d ao quadrado mais ele mesmo é igual a %.2f\n",x,z);
	}else{
		printf("o numero escolhido foi %x e ele e impar\n",x);
		y=3*x;
		printf("o triplo de %d e igual a %.2f\n",x,y);
			if(x%9==0){
				printf("%d e multiplo de 9\n",x);
			}else{
				printf("%d nao e multiplo de 9",x);
			}
	}
	
	
	
	
	
}
