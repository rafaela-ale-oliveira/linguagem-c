#include <stdio.h>

/**************************************
QUESTÃO 05:
Fazer uma função que calcule o MMC (mínimo
múltiplo comum) entre dois números.
**************************************/

/**************************************
CASO DE TESTE
A=6
B=8
Saida= 24
**************************************/



int main(){
	
	//calculando os numeros primos de um intervalo	
	int i, num1, num2, contador, numeroPrimo, multiplo=1;
	
	printf("entre com o primeiro numero: ");
	scanf("%d",&num1);
	printf("entre com o segundo numero: ");
	scanf("%d",&num2);
	
	//os numeros primos estão sendo calculados só uma vez ( erro )
	if(num1>num2){
		for(numeroPrimo=1;numeroPrimo<=num1;numeroPrimo++){
			contador=0;
			for(i=1;i<=numeroPrimo;i++){
				if(numeroPrimo%i==0){
					contador++;
				}
			}
			if(contador==2){
				//aqui está o erro: depois de achar o numero primo como fatorar???
				
				if((num1%numeroPrimo==0)||(num2%numeroPrimo==0)){
					while((num1%numeroPrimo!=1)&&(num2%numeroPrimo!=1)){
						multiplo*=numeroPrimo;
						num1=num1%numeroPrimo;
						num2=num2%numeroPrimo;
					}	
				}	
			}
		}		
	}else{
		for(numeroPrimo=1;numeroPrimo<=num2;numeroPrimo++){
			contador=0;
			for(i=1;i<=numeroPrimo;i++){
				if(numeroPrimo%i==0){
					contador++;
				}
			}
			if((num1%numeroPrimo==0)||(num2%numeroPrimo==0)){
				while((num1%numeroPrimo!=1)&&(num2%numeroPrimo!=1)){
					multiplo*=numeroPrimo;
					num1=num1%numeroPrimo;
					num2=num2%numeroPrimo;
				}	
			}	
		}			
	}
	printf("%d", multiplo);
}
	
	
	
	










