#include <stdio.h>

/**************************************
QUESTÃO 02:
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.
**************************************/

/**************************************
CASO DE TESTE
°CESLSIUS = 17
°FAHRENHEIT = 62,6
**************************************/

float converterTemperatura(float celsius){
	
	float fahrenheit;
	
	fahrenheit = (celsius *1.8) + 32;
		
	return fahrenheit;
}

int main(){
	
	float temperatura, fahrenheit;

	printf("entre com a temperatura que deseja converter: ");
	scanf("%f",&temperatura);

	fahrenheit = converterTemperatura(temperatura);
	printf("%.1f",fahrenheit);
	
}
