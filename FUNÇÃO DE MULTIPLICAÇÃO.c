#include<stdio.h>
	

int multiplicacao(int num1,int num2);

int main(){
	
	int resultado,num1,num2;
	
	printf("entre com 1 numero ");
	scanf("%d",&num1);
	printf("entre com 2 numero ");
	scanf("%d",&num2);
	resultado = multiplicacao(num1, num2);
	printf("resultado: %d",resultado);
		
}

int multiplicacao(int num1, int num2){
	int i=0;
	int resultado=0;
	
		while(i!=num2){
		resultado+=num1;
		i++;
		}
		return(resultado);
}
