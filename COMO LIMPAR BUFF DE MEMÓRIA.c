//COMO LIMPAR BUFF DE MEMORIA PARA NÃO DAR PROBLEMA COM CHAR NO SCANF



#include<stdio.h>

int main(){
	
	char menu;
	
	printf("escolha uma das opções em menu:\n");
	printf("\tc\tcachorro\n");
	printf("\tg\tgato\n");
	printf("\tp\tpassaro\n");
	printf("\te\telefante\n");
	fflush(stdin);
	scanf("%c",&menu);
	
}
