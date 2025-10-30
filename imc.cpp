#include<stdio.h>
#include<stdlib.h>


	int main(){
		float peso=0,altura=0,imc=0;
		
		printf("Digite o seu peso\n");
		scanf("%f",&peso);
		
		printf("Digite o sua altura\n");
		scanf("%f",&altura);
		
		imc = peso/(altura*altura);
		if(imc<18.5){
			printf("\nVoce esta com o peso baixo %.2f", imc);
		}else
			if(imc>=18.5 && imc<25){
				printf("\nVoce esta com o peso normal %.2f", imc);	
			}else
				if(imc>=25 && imc<30){
					printf("\nVoce esta com sobrepeso %.2f", imc);	
				}else
					if(imc>=30 && imc<35){
				printf("\nVoce esta com obesidaade nivel 1 %.2f", imc);
					}else
						if(imc>=35 && imc<40){
				printf("\nVoce esta com obesidade nivel 2 %.2f", imc);	
						}else{
							printf("\nVoce esta com obesidade morbida %.2f", imc);	
								}
	}
