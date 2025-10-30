#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;

    printf("Bem-vindo ao Menu de Açaí Frozen!\n");
    printf("Escolha os ingredientes para o seu açaí:\n");
    printf("1- Granola\n");
    printf("2- Leite condensado\n");
    printf("3- Amendoim\n");
    printf("4- Morango\n");
    printf("5- Tapioca\n");
    printf("6- Banana\n");
    printf("7- Chocoball\n");
    printf("8- MM'S\n");
    printf("9- Sem nada\n");
    
    scanf("%d", &opcao);
    if(opcao == 9){
    	printf("Voce escolheu o acai sem complemento");
	}else{
	
    	switch(opcao) {
        	case 1:
            	printf("Você escolheu adicionar Granola ao seu açaí.\n");
            break;
        	case 2:
            	printf("Você escolheu adicionar Leite condensado ao seu açaí.\n");
            break;
        	case 3:
            	printf("Você escolheu adicionar Amendoim ao seu açaí.\n");
            break;
        	case 4:
            	printf("Você escolheu adicionar Morango ao seu açaí.\n");
            break;
        	case 5:
            	printf("Você escolheu adicionar Tapioca ao seu açaí.\n");
            break;
        	case 6:
            	printf("Você escolheu adicionar Banana ao seu açaí.\n");
            break;
        	case 7:
            	printf("Você escolheu adicionar Chocoball ao seu açaí.\n");
            break;
        	case 8:
            	printf("Você escolheu adicionar MM'S ao seu açaí.\n");
            break;
        	default:
            	printf("Opção inválida. Por favor, escolha uma opção válida de 1 a 9.\n");
    	}
	}	

    return 0;
}
