#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;

    printf("Bem-vindo ao Menu de A�a� Frozen!\n");
    printf("Escolha os ingredientes para o seu a�a�:\n");
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
            	printf("Voc� escolheu adicionar Granola ao seu a�a�.\n");
            break;
        	case 2:
            	printf("Voc� escolheu adicionar Leite condensado ao seu a�a�.\n");
            break;
        	case 3:
            	printf("Voc� escolheu adicionar Amendoim ao seu a�a�.\n");
            break;
        	case 4:
            	printf("Voc� escolheu adicionar Morango ao seu a�a�.\n");
            break;
        	case 5:
            	printf("Voc� escolheu adicionar Tapioca ao seu a�a�.\n");
            break;
        	case 6:
            	printf("Voc� escolheu adicionar Banana ao seu a�a�.\n");
            break;
        	case 7:
            	printf("Voc� escolheu adicionar Chocoball ao seu a�a�.\n");
            break;
        	case 8:
            	printf("Voc� escolheu adicionar MM'S ao seu a�a�.\n");
            break;
        	default:
            	printf("Op��o inv�lida. Por favor, escolha uma op��o v�lida de 1 a 9.\n");
    	}
	}	

    return 0;
}
