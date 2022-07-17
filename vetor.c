#include<stdio.h>

int main(){
	
	int numeros[4]={1,2,3,4},maior=-555555, i;
	
	
	for(i=0;i<4;i++){
		
		if(numeros[i]>maior){
			maior=numeros[i];
		}
			
	}
	printf("%d", maior);
	
	
}
