
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int n1,n2,maior,menor,meio,x1,x2,x3,resul;	
	
	printf("insira um numero: ");
	scanf("%d",&n1);
	printf("numero escolhido: %d\n",n1);
	
	if((n1>=100)&&(n1<=999)){
		x1=n1%10;
		printf("x1: %d\n",x1);
		resul=n1/10;
		printf("resul: %d\n",resul);
		x2=resul%10;
		printf("x2: %d\n",x2);
		x3=resul/10;
		printf("x3: %d\n",x3);
		if((x1>x2)&&(x2>x3)){
			maior=x1;
			meio=x2;
			menor=x3;
			printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
		}else{
			if((x3>x1)&&(x1>x2)){
				maior=x3;
				meio=x1;
				menor=x2;
				printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
			}else{
				if((x2>x3)&&(x3>x1)){
					maior=x2;
					meio=x3;
					menor=x1;
					printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
				}else{
					if((x3>x2)&&(x2>x1)){
						maior=x3;
						meio=x2;
						menor=x1;
						printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
					}else{
						if((x1>x3)&&(x3>x2)){
							maior=x1;
							meio=x3;
							menor=x2;
							printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
						}else{
							if((x2>x1)&&(x1>x3)){
								maior=x2;
								meio=x1;
								menor=x3;
								printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
							}else{
								if((x2==x1)&&(x1==x3)){
									maior=x2;
									meio=x1;
									menor=x3;
									printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
								}else{
									if((x2==x1)&&(x1>x3)){
										maior=x2;
										meio=x1;
										menor=x3;
										printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
									}else{
										if((x2==x1)&&(x3>x1)){
											maior=x3;
											meio=x1;
											menor=x2;
											printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
										}else{
											if((x3==x1)&&(x3>x2)){
												maior=x3;
												meio=x1;
												menor=x2;
												printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
											}else{
												if((x3==x1)&&(x2>x3)){
													maior=x2;
													meio=x1;
													menor=x3;
													printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
												}else{
													if((x3==x2)&&(x2>x1)){
														maior=x2;
														meio=x3;
														menor=x1;
														printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
													}else{
														if((x3==x2)&&(x1>x2)){
															maior=x1;
															meio=x3;
															menor=x2;
															printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
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
		n2=(menor*100)+(meio*10)+maior;
		printf("n2: %d",n2);	
	}else{
		printf("numero fora do intervalo");
	}
}	
