#include<stdio.h>

int main(){
	int i, tamanho=4, elemento;
	int vetor []= {10,20,30,40};
	
	for(i=0;i<tamanho;i++){
		printf("vetor[%d]\t=\t%d\n",i,vetor[i]);
	}
	printf("\n\n");
	
	printf("entre com o elemento para Remover: ");
	scanf("%d",&elemento);
	
	for(i=0;i<tamanho;i++){
		if(elemento == vetor[i]){

		printf("entre com o Novo Elemento: ");
		scanf("%d",&vetor[i]);
		return 0;
		}			
	}
	printf("elemento nao esta na lista\n\n");
	
	
	for(i=0;i<tamanho;i++){
		printf("vetor[%d]\t=\t%d\n",i,vetor[i]);
	}
	
	printf("\n\n");
}




/*
int alterarElemento(int vetor[],int *quantidade){		// função para alterar elementos no vetor
	int i, elemento, novoElemento, retornoElementoRepetido, retornoOrdenacao;
	
	printf("entre com o elemento para Remover: ");
	scanf("%d",&elemento);
	
	for(i=0;i<*quantidade;i++){
		if(elemento == vetor[i]){
			printf("entre com o Novo Elemento: ");
			scanf("%d",&novoElemento);
			
			retornoElementoRepetido= verificarElementoRepetido(vetor, novoElemento, *quantidade);
			
			if(retornoElementoRepetido==false){
				printf("Elemento ja esta contido na lista\n\n");
				return false;	
			}else{
				
				retornoOrdenacao= ordenarLista(vetor, novoElemento, *quantidade);
				
				if(retornoOrdenacao==false){
					printf("Elemento alterado com sucesso !!\n\n");
					
				}else{
					vetor[i] = novoElemento;
					printf("Elemento alterado com sucesso !!\n\n");	
				}
				return true;
			}			
		}						
	}
	printf("elemento nao esta na lista\n\n");
}

*/
