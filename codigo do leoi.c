#include <stdio.h>

void funcao (float *x, float y);


void main ()
{
	float num1 = 5;
	float num2 = 25;
	
	printf ("Antes da funcao: num1 = %d e num2 = %.1f\n", num1, num2);
	
	funcao (&num1, num2);
	
	printf ("Apos a funcao: num1 = %d e num2 = %.1f\n", num1, num2);
}

void funcao (float *x, float y)
{
	*x++;
	y = (y-*x)/2; 
	
}
