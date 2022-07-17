#include <stdio.h>
#include <stdlib.h>

/*

Júlio tem hoje 22 anos. Três anos atrás seu irmão, Pedro, tinha 2 anos. Marque a alternativa que apresenta o 
número que corresponde a daqui a quantos anos a idade de Júlio será o dobro da idade de Pedro.

*/


int main(){
	
//	declarar variaveis para idade de Julio, idade de Pedro e contador;
	
	int julio=22,pedro=5,i=0;
	
//	condiçaõ de loop: a idade de Julio deve ser menor que o dobro da idade de pedro; 
	
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
