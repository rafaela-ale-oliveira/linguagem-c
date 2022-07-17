#include<stdio.h>

int main(){
	




	
}
int verificarElementoRepetido(int vetor[], int elemento, int quantidade){
	int i;
	for(i=0;i<=quantidade;i++){
		if(elemento==vetor[i]){
			printf("Elemento ja esta contido na lista");
			return false;
		}else{
			return true;
		}
	}
}

