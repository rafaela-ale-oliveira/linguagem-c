#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num, resto, resultado;
	
	printf("entre com um numero: ");
	scanf("%d",&num);
	
	resto=num%10;
	resultado=num/10;
	
	if(resto==1){
		printf("I");
		resto=resultado%10;
		resultado/=10;
	}else{
		if(resto==2){
			printf("II");
			resto=resultado%10;
			resultado/=10;			
		}else{
			if(resto==3){
				printf("III");
				resto=resultado%10;
				resultado/=10;
			}else{
				if(resto==4){
					printf("IV");
					resto=resultado%10;
					resultado/=10;
				}else{
					if(resto==5){
						printf("V");
						resto=resultado%10;
						resultado/=10;
					}else{
						if(resto==6){					
							printf("VI");
							resto=resultado%10;
							resultado/=10;
						}else{
							if(resto==7){
								printf("VII");
								resto=resultado%10;
								resultado/=10;	
							}else{
								if(resto==8){
									printf("VIII");
									resto=resultado%10;
									resultado/=10;
								}if(resto==9){
									printf("IX");
									resto=resultado%10;
									resultado/=10;									
								}else{
									resto=resultado%10;
									resultado/=10;	
								}
							}
						}
					}
				}
			}
		}
	}
	switch(num){
		case(0):
			resto=resultado%10;
			resultado/=10;
			break;
		case(1):
			printf("x");
			resto=resultado%10;
			resultado/=10;sultado/=10;			
			break;
		case(2):
			printf("XI");
			resto=resultado%10;
			resultado/=10;			
			break;
		case(3):
			printf("I");
			resto=resultado%10;
			resultado/=10;
			break;
		case(4):
			printf("I");
			resto=resultado%10;
			resultado/=10;	
			break;
		case(5):
			printf("I");
			resto=resultado%10;
			resultado/=10;
			break;
		case(6):
			printf("I");
			resto=resultado%10;
			resultado/=10;
			break;
		case(7):
			printf("I");
			resto=resultado%10;
			resultado/=10;
			break;
		case(8):
			printf("I");
			resto=resultado%10;
			resultado/=10;
			break;
		case(9):
			printf("I");
			resto=resultado%10;
			resultado/=10;	
			break;									
	}
	
	
	
	
	
	
	
}
