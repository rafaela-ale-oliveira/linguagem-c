#include <stdio.h>

/**************************************
QUESTÃO 04:
Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números.
**************************************/

/**************************************
CASO DE TESTE
A=18
B=60
saida= 6
A=30
B=15
saida= 15
**************************************/

int calcularMDC(int num1, int num2){
	int i, mdc;
	
	if (num1<num2){
		
		for(i=1;i<=num1;i++){
			if((num1%i==0)&&(num2%i==0)){
				mdc=i;
			}	
		}	
	}else{
		
		for(i=1;i<=num2;i++){
			if((num1%i==0)&&(num2%i==0)){
				mdc=i;
			}	
		}	
	}
	return mdc;
}

int main(){
	
	int num1, num2, mdc;
	
	printf("Entre com o primeiro numero: ");
	scanf("%d",&num1);
	printf("Entre com o segundo numero: ");
	scanf("%d",&num2);
	mdc = calcularMDC(num1, num2);
	printf("%d",mdc);
}
