#include <stdio.h>

#define TAM 5

void main(){
	int  i, vet[]={1,3,3,3,5}, aux, j, nrep=0;



	printf("Quantidade de Numeros Unicos e igual a: \n");
	    for (i = 1; i< TAM; i++){
	      	aux = 0;
	     
	      	for(j = i-1; j >= 0; j--){
		        if(vet[i] == vet[j]){
		          aux = 1;
		          nrep++;
		  		}
			}
	
	   	}
	printf("%d \n", TAM-nrep );
}
