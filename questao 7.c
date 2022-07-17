#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
/* 
ler um caracter
	se for masculino ou feminino
		imprimir aceito
	se nao
		imprimir deu ruim
		
*/

	char x;
	printf("insira um genero: m- maculino e f- feminino\n");
	scanf("%c",&x);
	
	if(x=='m'){
		printf("seu genero e masculino");
	}else{
		if(x=='f'){
			printf("seu genero e feminino");
		}else{
			printf("genero invalido");
		}
		
	}


	
	
	
	
	
	
}
