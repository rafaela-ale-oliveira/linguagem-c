#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	
	
	float resultado, num1,num2;
	char operador;

	do{
		printf("Escolha a operacao desejada:\n");
		printf("\t(+)\tsoma\n");
		printf("\t(-)\tsubtração\n");
		printf("\t(*)\tmultiplicação\n");
		printf("\t(/)\tdivisão\n");
		printf("\t(L)\tlogaritimo\n");
		fflush(stdin); 
		scanf("%c",&operador);
		operador=tolower(operador);
	

		if(operador=='+'){
			
			printf("insira o primeiro valor:");
			scanf("%f",&num1);
			printf("insira o primeiro valor:");
			scanf("%f",&num2);
		
			
			resultado = num1+num2;
			printf("%.2f + %.2f = %.2f\n\n",num1,num2,resultado);
			
			printf("\n\n");
		}else{
			if(operador=='-'){
				printf("insira o primeiro valor:");
				scanf("%f",&num1);
				printf("insira o primeiro valor:");
				scanf("%f",&num2);
				
				resultado = num1-num2;
				printf("%.2f - %.2f = %.2f",num1,num2,resultado);
				
				printf("\n\n");
			}else{
				if(operador=='*'){
					printf("insira o primeiro valor:");
					scanf("%f",&num1);
					printf("insira o primeiro valor:");
					scanf("%f",&num2);
					
					resultado = num1*num2;
					printf("%.2f * %.2f = %.2f",num1,num2,resultado);
					
					printf("\n\n");		
				}else{
					if(operador=='/'){
						printf("insira o primeiro valor:");
						scanf("%f",&num1);
						printf("insira o primeiro valor:");
						scanf("%f",&num2);
						
						if(num2==0){
							printf("operacao imposivel");
							printf("\n\n");
						}
						resultado=num1/num2;
						printf("%.2f / %.2f = %.2f",num1,num2,resultado);
						printf("\n\n");
					}else{
						if(operador=='l'){
							printf("insira o numero logaritmando:");
							scanf("%f",&num1);
							printf("insira a base:");
							scanf("%f",&num2);
							
							resultado= (int)log(num1)/log(num2);
							printf("Log de %.2f na base %.2f = %.2f",num1,num2,resultado);
							printf("\n\n");
							
						}if(operador=='s'){
							printf("fim do programa");	
						}else{
							printf("insira um comando valido");
							printf("\n\n");
						}
					}
				}	
			}
		}	
	}while(operador!='s');
}
