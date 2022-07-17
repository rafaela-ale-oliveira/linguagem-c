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
	
	printf ("insira um numero N: ");
	scanf ("%d", &num);
	
	cont1=1;
	while(cont1<=num){
		cont2=1;
		while(cont2<=cont1){
			printf ("%d ", cont2);
			cont2++;
		}	
		printf("\n");
		cont1++;
	}
}
