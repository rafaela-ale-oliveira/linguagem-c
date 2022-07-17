/*******************************************
Atividade n� 2 de Algoritmos de Computa��o I - Professor Leonardo Vianna

									[2022/1]
										
Desenvolver uma fun��o que, dado um n�mero
inteiro N, calcule o valor de S:

S = N - (N-1)/2! + (N-2)/3! - (N-3)/4! + (N-4)/5! - ... 1/N!	
										
*******************************************/
/*******************************************
CASO DE TESTE:
N=1 -----> S= 1.000000
N=2 -----> S= 1.500000
N=3 -----> S= 2.166667
N=4 -----> S= 2.791667 
N=5 -----> S= 3.425000										
*******************************************/
#include <stdio.h>							//importar bibliotecas

float calcularValorS(int n);				//
int fatorial(int i);						//prot�tipos das fun��es
int decrementarDeN(int n, int i);			//

int main(){									//fun��o principal
	int numero;
	float s;
	printf("Entre com um numero: ");			//lendo valor N para calcular S	
	scanf("%d", &numero);
	s= calcularValorS(numero);					//chamando a fun��o calcularValorS 
	printf("Valor de S = %f\n\n",s);			//exibindo  s para teste
}
float calcularValorS(int n){				//fun��o que calcula o valor de S
	int i, divisor, dividendo;
	float s = 0;
	for(i=0;i<n;i++){							//loop que varia de 0 at� n-1
		divisor= fatorial(i);                   	//chamando a fun��o fatorial  
		dividendo= decrementarDeN(n, i);			//chamando a fun��o decrementarDeN 
		s+= (float)dividendo/divisor;				//express�o para calcular valor de S
	}
	return s;
}
int fatorial(int i){						//fun��o que calcula o fatorial de um numero
	int j,fatorial=1;
	i++;
	for(j=1;j<=i;j++){							//Loop para calcular o fatorial de um numero
		fatorial*=j;	
	}
	return fatorial;							//retorno do valor fatorial
}
int decrementarDeN(int n, int i){			//fun��o que calcula o valor de N - i
	n-=i;							
	if (i%2==0){								//subtraindo um valor par de N: 
		return n;									//retorna o decremento positivo
	}else{										//subtraindo um valor impar de N:
		return n *(-1);								//retorna o decremento negativo
	}
}
