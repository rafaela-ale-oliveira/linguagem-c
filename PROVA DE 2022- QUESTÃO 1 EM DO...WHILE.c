#include <stdio.h>

int main(){
	
	int num,media,i;
	
	printf("entre com um numero:");
	scanf("%d",&num);
	
	media= num/2;
	
	i=1;
	do{
		
		if(num%i!=0){
			printf("%d ",i);
		}
		i++;
	}while(i<=media);
	i=++media;
	do{
		
		if(i%2==0){
			printf("%d ",i);
		}
		i++;	
	}while(i<=num);	
}
