#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	

	
	int i=0,j=0,soma=0;
	
	for(i=1,j=50;i<=50;i++,j--){
		
		printf("%d,%d,",i,j);
		soma+=i+j;
	}
	printf("\nsoma: %d",soma);
	

	
		/*
	float q, valorFinal=0, rendimento=0,r;
	int i,a,m;
	
	printf("entre com o valor do investimento: ");
	scanf("%f",&q);
	printf("valor inicial: R$ %.2f\n\n",q);
	
	printf("entre com o valor do rendimento: ");
	scanf("%.2f",&r);
	printf("rendimento fixo: %.2f por cento \n\n",r);
	
	printf("entre com o tempo em anos: ");
	scanf("%d",&a);
	printf("tempo de investimento: %d anos\n\n",a);
	
	m= a*12;
	valorFinal=q;
	rendimento= (r/100);
	printf("%.2f\n",rendimento);
	
	for(i=1;i<=m;i++){
		
	valorFinal = (valorFinal*rendimento);
	
	}
	
	printf("valor final:R$ %.2f",valorFinal);
	
	
	/*
	float n;
	int i;
	
	for(i=1;i<=300;i++){
		
		printf("entre com um numero: ");
		scanf("%.2f",&n);
		
	
	}
	*/
	
}
