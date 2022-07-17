#include<stdio.h>

void exibirNumeroPrimo(int numero){
	int i, j, contador;
	for(i=1;i<=numero;i++){
		contador=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				contador++;
			}
		}
		if(contador==2){
			printf("%d ",i);
		}		
	}	
}
int main(){
	int numero = 10;
	exibirNumeroPrimo(numero);	
}	
