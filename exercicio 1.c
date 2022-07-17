#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dia, mes, ano;
	
	printf("insira uma data: dia,mes,ano: ");
	scanf("%d %d %d", &dia,&mes,&ano);
	
	if(mes == 1 && dia <= 31 && dia>0 && ano>0){
		printf("data valida");
	}else{
		if(mes == 2 && (dia <= 28 && dia>0) && ano>0){
				printf("data valida");
		}else{
			if(mes == 3 && dia <=31 && dia>0 && ano>0){
				printf("data valida");
			}else{
				if(mes == 4 && dia <= 30 && dia>0 && ano>0){
					printf("data valida");
				}else{
					if(mes == 5 && dia <=31 && dia>0 && ano>0){
						printf("data valida");
					}else{
						if(mes == 6 && dia <= 30 && dia>0 && ano>0){
							printf("data valida");
						}else{
							if(mes == 7 && dia <=31 && dia>0 && ano>0){
								printf("data valida");
							}else{
								if(mes == 8 && dia <=31 && dia>0 && ano>0){
									printf("data valida");
								}else{
									if(mes == 9 && dia <= 30 && dia>0 && ano>0){
										printf("data valida");
									}else{
										if(mes == 10 && dia <=31 && dia>0 && ano>0){
											printf("data valida");
										}else{
											if(mes == 11 && dia <= 30 && dia>0 && ano>0){
												printf("data valida");
											}else{
												if(mes == 12 && dia <=31 && dia>0 && ano>00){
													printf("data valida");	
												}else{
													printf("data invalida");
												}
											}		
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	
	
	
	
	
	
	
}
