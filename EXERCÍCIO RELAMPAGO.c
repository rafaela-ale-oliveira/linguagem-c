#include <stdio.h>
#include <stdlib.h>

/*

J�lio tem hoje 22 anos. Tr�s anos atr�s seu irm�o, Pedro, tinha 2 anos. Marque a alternativa que apresenta o 
n�mero que corresponde a daqui a quantos anos a idade de J�lio ser� o dobro da idade de Pedro.

*/


int main(){
	
//	declarar variaveis para idade de Julio, idade de Pedro e contador;
	
	int julio=22,pedro=5,i=0;
	
//	condi�a� de loop: a idade de Julio deve ser menor que o dobro da idade de pedro; 
	
	while(pedro*2<julio){
		
		printf("idade de Julio: %d\n",julio);
		printf("idade de Pedro: %d\n",pedro);
		printf("\n\n");
		i++;
		julio++;
		pedro++;
			
	}	
//	exibir resultados 
	printf("idade de Julio: %d\n",julio);
	printf("idade de Pedro: %d\n",pedro);
	printf("Julio tera o dobro da idade de Pedro daqui a %d anos",i);	
	
}
