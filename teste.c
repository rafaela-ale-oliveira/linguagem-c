





#include<stdio.h>

int main(){
	
	
	int numeroPrimo, num1=20, contador, i;
	
	
	
	
	for(numeroPrimo=1;numeroPrimo<=num1;numeroPrimo++){
			contador=0;
			for(i=1;i<=numeroPrimo;i++){
				if(numeroPrimo%i==0){
					contador++;
				}
			}
			if(contador==2){
				printf("%d", numeroPrimo);
}
