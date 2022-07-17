#include <stdio.h>

int main(){
	
	int num,media,i;
	
	printf("entre com um numero:");
	scanf("%d",&num);
	
	media= num/2;
	for(i=1;i<=media;i++){
		
		if(num%i!=0){
			printf("%d ",i);
		}	
	}
	for(i=++media;i<=num;i++){
		
		if(i%2==0){
			printf("%d ",i);
		}	
	}	
}
