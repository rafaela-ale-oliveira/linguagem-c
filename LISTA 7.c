#include <stdio.h>

	int main (){
		
		/*
		QUESTÃO 01: Dado o programa abaixo, fornecer os valores que serão exibidosquando o mesmo for executado:
		
	int A, B, C, i;
	A = 0;
	B = 10;
	C = B - A;
	i = 1;
	
	while (i <= 10){
		if (C > A){
			C = C - 2;
			i++;
		}else{
			i += 2;
			B = C % i;
		}
		A = A + i;
		printf ("A = %d\n", A);
		printf ("B = %d\n", B);
		printf ("C = %d\n", C);
		printf ("i =%d\n", i);
	}
	*/
	/*

   
   QUESTÃO 02: Um fazendeiro realizou um tratamento sobre sua plantação de café que gerou um crescimento 
   constante de C % em sua produção, por ano. Considerando que atualmente sua produção anual seja de M u.p., 
   implementar um programa que determine a quantidade de anos necessária para que a produção duplique.
   
	   	//declaração de variáveis
		int anos = 0;
		float m, c, prod;
		
		//lendo os dados de entrada
		printf ("Entre com a producao anual atual: ");
		scanf ("%f", &m);
		
		printf ("Entre com a taxa de crescimento anual: ");
		scanf ("%f", &c);
		
		//inicialização a produção 'prod' com o valor de 'm'
		prod = m;
		
		//enquanto esta produção não duplicar...
		while (prod < 2*m)
		{
			//atualização abual da produção
			prod += (c/100)*prod;
				
			anos++;
		}
		
		//exibindo o resultado
		printf ("Foram necessarios %d anos para a producao duplicar (%.1f --> %.1f)\n", anos, m, prod);
*/
	
/*
 
   QUESTÃO 03: Faça um programa que exiba na tela as tabuadas dos números de 1 a 9, como descrito a seguir:

				1 × 0 = 0	2 × 0 = 0	...	9 × 0 = 0	
				1 × 1 = 1	2 × 1 = 2	...	9 × 1 = 9	
				1 × 2 = 2	2 × 2 = 4	...	9 × 2 = 18
					.		.		.
					.		.		.
					.		.		.
				1 × 9 = 9	2 × 9 = 18	...	9 × 9 = 81
				
			//declaração de variáveis
		int i, j, r;
		
		//exibindo as tabuadas de 1 a 9
		for (i=1;i<=9;i++)
		{
			//multiplicando cada 'i' pelos valores de 0 a 9
			for (j=0;j<=9;j++)
			{
				//calculando o produto 'i' x 'j'
				r = i*j;
				
				//exibindo o resultado
				printf ("%d x %d = %d\n", i, j , r);
			}
			
			printf ("\n");
		}
*/	
	/*
   
   QUESTÃO 05: Uma pesquisa foi feita coletando informações (idade, altura e peso) de um grupo de pessoas.
   Pede-se a implementação de um programa que proceda com a leitura de tais informações (até que o usuário 
   opte por concluir a entrada de dados) e calcule:
   		- A quantidade de pessoas com idade superior a 50 anos;
   		- A média de altura das pessoas com mais de 80 kg;
   		- O maior peso dentre as pessoas acima de 1.65 m de altura 
   		  e com idade inferior a 30 anos.
   		  
   		
		//Declaração de variáveis
		int idade, maior50=0, mais80kg=0;
		float altura, peso, somaAltura=0, mediaAltura, maiorPeso=0;
		char opcao;
		
		//permanecerá lendo dados até que o usuário opte por sair do programa
		do 
		{		
			printf("\nIdade: ");
			scanf("%d", &idade);
			
			printf("\nAltura: ");
			scanf("%f", &altura);
				
			printf("\nPeso: ");
			scanf("%f", &peso);
				
			//A quantidade de pessoas com idade	superior a 50 anos;
			if (idade>50)
			{
				maior50++;
			}
				
			//A media de altura das pessoas com mais de 80 kg;
			if (peso > 80)
			{
				mais80kg++;
				somaAltura+=altura;
			}
				
			//O maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a 30 anos.
			if ((altura > 1.65) && (idade<30))
			{
				if (peso > maiorPeso)
				{
					maiorPeso = peso;
				}
			}
					
			//verificando se o usuário deseja continuar
			do
			{
				printf ("\n\nDeseja continuar [S/N]? ");
				fflush (stdin);
				scanf ("%c", &opcao);
				opcao = toupper (opcao);
				
				//verificando se a opção digitada é inválida
				if ((opcao != 'S') && (opcao != 'N'))
				{
					printf ("\n\tOpcao invalida! Tente nomvamente.\n");
				}
			}
			while ((opcao != 'S') && (opcao != 'N'));
		}
		while (opcao == 'S');
		
		//calculando a média de altura das pessoas com mais de 80 kg	
		mediaAltura = somaAltura/mais80kg; 
	
		//exibindo os resultados
		printf("\n\n A quantidade de pessoas com idade superior a 50 anos eh: %d", maior50);
		printf("\n A media de altura das pessoas com mais de 80kg eh: %.2f", mediaAltura);
		printf("\n O maior peso dentre pessoas acima de 1.65m e idade inferior a 30 anos eh: %.2f", maiorPeso);
*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
