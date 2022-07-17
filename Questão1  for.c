#include<stdio.h>

int main(){
	
	
	int num, cont1, cont2;
	
	/*
	CASO DE TESTE
	7
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5 
	1 2 3 4 5 6
	1 2 3 4 5 6 7
	*/
	
	printf("insira um numero N: ");
	scanf("%d", &num);

	for(cont1=1;cont1<=num;cont1++){

		for (cont2=1;cont2<=cont1;cont2++){
			printf ("%d ", cont2);	
		}	
		printf("\n");
	}
}
