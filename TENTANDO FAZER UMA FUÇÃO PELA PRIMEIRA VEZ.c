#include<stdio.h>

int potencia(int base,int expoente);

	
int main(){

	int resultado, base, expoente;
	
	printf("entre com a base ");
	scanf("%d",&base);
	printf("entre com o expoente ");
	scanf("%d",&expoente);
	resultado= potencia ( base, expoente);
	printf("resultado: %d",resultado);
}
int potencia(int base,int expoente){
	int resultado= 1, i=0;	
	while(i!=expoente){
		i++;
		resultado*=base;	
	}
	return(resultado);
}
