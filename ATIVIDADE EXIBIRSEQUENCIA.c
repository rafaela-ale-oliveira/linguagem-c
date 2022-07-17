#include<stdio.h>

void exibirSequencia(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i!=j){
				printf("(%d %d) ", i, j);
			}	
		}	
	}
}
int main(){
	int numero;
	printf("entre com um numero: ");
	scanf("%d", &numero);
	
	exibirSequencia(numero);
}	
