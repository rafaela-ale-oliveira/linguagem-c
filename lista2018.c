//	lista 2018. estrutura de repeti��o
	
	
	
	/*
		QUEST�O 06: Fa�a um programa que leia um n�mero N inteiro, menor do que 20 (se for maior ou igual a 20, o programa 
		deve exibir uma mensagem de erro). Ap�s isso, o programa deve imprimir os n�meros no intervalo de 1 a 99 cujos 
		algarismos somem N.

	
	int N,i,dezena,unidade,soma;
	
	printf("Entre com um numero: ");
	scanf("%d",&N);
	printf("intervalo: ");
	if(N>=20){
		printf("numero escolido fora do intervalo");
	}else{
		for(i=1;i<100;i++){
			dezena=i/10;
			unidade=i%10;
			soma=dezena+unidade;
			if(soma==N){
				printf(" %d, ",i);
			}	
		}
	}
	*/
