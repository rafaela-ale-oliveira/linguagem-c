#include <stdio.h>

int main(){
	
	int num,media,i;
	
	printf("entre com um numero:");
	scanf("%d",&num);
	
	media= num/2;
	i=1;
	while(i<=media){
		
		if(num%i!=0){
			printf("%d ",i);
		}
		i++;	
	}
	i=++media;
	while(i<=num){
		
		if(i%2==0){
			printf("%d ",i);
		}
		i++;	
	}	
}
