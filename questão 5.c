#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
/* 
questão 5: ler 3 numeros inteiros e fazer a media aritmetica
*/	
	
	int x,y,z;
	float media;
	
	printf("insira um numero x: ");
	scanf("%d",&x);
	
	printf("insira um numero y: ");
	scanf("%d",&y);
	
	printf("insira um numero z: ");
	scanf("%d",&z);
	
	media=(x+y+z)/3;
	printf("a media aritimetica ente %d %d %d e igual a %.2f",x,y,z,media);
	
}
