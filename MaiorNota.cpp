#include<stdio.h>
#include<stdlib.h>

	main(){
		float nota1,nota2,nota3;
		char nome[20];
		int op;
		
		printf("Nome do aluno\n");
		scanf("%s",&nome);
		printf("Primeira nota\n");
		scanf("%f",&nota1);
		printf("Segunda nota\n");
		scanf("%f",&nota2);
		printf("terceira nota\n");
		scanf("%f",&nota3);
		
		
		if(nota1>=0 && nota2>=0 && nota3>=0){
			printf("opcao de notas\n1 - Maior nota\n2 - Menor nota\n3 - iguais\n");
			scanf("%d",&op);
			
			switch(op){
				case 1:
					if(nota1 > nota2 && nota1>nota3){
						printf("Nota 1 do aluno %s e  maior %.2f ",nome ,nota1);
					}else if(nota2 > nota1 && nota2 > nota3){
						printf("Nota 2 do aluno %s e  maior %.2f ",nome ,nota2);
					}else if(nota3 > nota1 && nota3 > nota2){
						printf("Nota 3 do aluno %s e  maior %.2f ",nome ,nota3);
					}
				break;
				case 2:
					if(nota1 < nota2 && nota1 < nota3){
						printf("Nota 1 do aluno %s e  menor %.2f ",nome ,nota1);
					}else if(nota2 < nota1 && nota2 < nota3){
						printf("Nota 2 do aluno %s e  menor %.2f ",nome ,nota2);
					}else if(nota3 < nota1 && nota3 < nota2){
						printf("Nota 3 do aluno %s e  menor %.2f ",nome ,nota3);
					}
				break;
				case 3:
					if(nota1 == nota2 && nota1 != nota3){
						printf("Notas 1 e 2 do aluno %s sao iguais %.2f ",nome ,nota2);
					}else if(nota1 == nota3 && nota2 != nota3){
						printf("Notas 1 e 3 do aluno %s sao iguais %.2f ",nome ,nota1);
					}else if(nota3 == nota2 && nota1 != nota2){
						printf("Notas 2 e 3 do aluno %s sao iguais %.2f ",nome ,nota3);
					}else{
						printf("As tres sao iguais");
					}
				break;			
			}
		}else{
			printf("Notas invalidas");
		}
		
	}
