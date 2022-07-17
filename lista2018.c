//	lista 2018. estrutura de repetição
	
	
	
	/*
		QUESTÃO 06: Faça um programa que leia um número N inteiro, menor do que 20 (se for maior ou igual a 20, o programa 
		deve exibir uma mensagem de erro). Após isso, o programa deve imprimir os números no intervalo de 1 a 99 cujos 
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
