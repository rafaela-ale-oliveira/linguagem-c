#include<stdio.h>

void divisores(int numero, int *soma, float *media){
	int i, quant=0;
	*soma=0;
	for(i=1;i<=numero;i++){
		if(numero%i==0){
			(*soma)+=i;
			quant++;
		}
	}
	*media= (float)(*soma)/quant;
}
int main(){
	int numero=8, soma;
	float media;
	divisores(numero, &soma, &media);
	printf("soma: %d \n\n", soma);
	printf("media: %f ", media);
}
