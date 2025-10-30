#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

#define lin 30
#define col 30

int main(){
	setlocale(LC_ALL,"Portuguese");
	char mat[lin][col];
	int i,j,k,l,op,novoK,novoL;
	char nome[lin][col][100];
	int temReserva = 0;
	
	//inicializacao
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            mat[i][j] = 'L';
        }
    }
	do{
        
    	printf("\n1 - Inserir reserva\n2 - Mostrar gráfico reserva\n3 - Mostrar mesa da reserva\n4 - excluir individual as reservas\n");
		printf("5 - Alterar as reservas\n6 - Excluir todas as resrvas\n7 - Sair\nEscolha uma opção: ");
    	scanf("%d", &op);

		switch(op){
    		case 1:
    			getchar();
    			system("cls");
					printf("Inserindo a reserva:\n");
					
					printf("Informe a fileira da mesa(1 e %d): \n", lin);
        			scanf("%d", &k);
					
					while(k<1 || k>30){
        				printf("Valor inválido!\nInforme a fileira entre 1 e %d: \n", lin);
    					scanf("%d", &k);
        			}
        			k=k-1;
        			printf("Informe o numero  da mesa (1-%d) da fileira %d: \n", col,k+1);
        			scanf("%d", &l);
        			
					while(l<1 || l>30){
        				printf("Valor inválido!\nInforme a mesa entre 1 e %d: da flieira %d \n", col,k+1);
    					scanf("%d", &l);
        			}
        			l=l-1;
        			printf("Digite o nome da pessoa que reservou\n");
					scanf("%s",&nome[k][l]);
    
    				if (mat[k][l] == 'L') {
                		mat[k][l] = 'R';
                		printf("Reserva inserida na fileira [%d] e mesa [%d]!\n", k+1, l+1);
            		} else {
                		printf("Mesa já esta reservada!\n");
            		}
				
			break;
			case 2:
				system("cls");
				
    			//impressao da tela
    			 printf("\n\t\t");
				 for(i=0;i<col;i++){
    			 	printf("%2d ",i+1);
				 }
				 printf("\n\n");
            	for(i=0;i<lin;i++){
                	for(j=0;j<col;j++){
                		if(j==0){
                        	printf("\t");
                    	}	
                    	if(j == 0 ){
                        	printf("   %2d  ",i+1);
                    	}
                    	printf(" %c ",mat[i][j]);
                	}
                	printf("\n");
            	}
            break;
            	    printf("\n");
            case 3:
            	system("cls");
             	printf("\nLista de reservas:\n");
                for(i = 0; i < lin; i++){
                    for(j = 0; j < col; j++){
                        if (mat[i][j] == 'R') {
                            printf("A resrva está na fileira [%d] e mesa [%d] com o nome de: %s\n", i+1, j+1, nome[i][j]);
                        }
                    }
				}
				
            break;
            case 4:
            	system("cls");
            	printf("Exclusão de reserva individual\n");
            	
            	for(i = 0; i < lin; i++){
        			for(j = 0; j < col; j++){
            			if (mat[i][j] == 'R') {
                			temReserva = 1; 
                			break;
            			}
        			}
    			}
            	if(temReserva==1){
					printf("Informe a fileira da mesa a ser excluida (1-%d): \n", lin);
        			scanf("%d", &k);
        		
					while(k<1 || k>30){
        				printf("Valor inválido!\nInforme a fileira entre 1 e %d: \n", lin);
    					scanf("%d", &k);
    					fflush(stdin);
        			}
        			k=k-1;
					printf("Informe a mesa a ser excluida (1-%d) da fileira [%d]: \n", col,k);
        			scanf("%d", &l);
        		
        			while(l<1 || l>30){
        				printf("Valor inválido!\nInforme a mesa entre 1 e %d: da flieira %d \n", col,k);
    					scanf("%d", &l);
        			}
        			l=l-1;
            		if (mat[k][l] == 'R') {
                    	mat[k][l] = 'L';
                    	printf("A reserva da fileira [%d] da mesa [%d] foi removida!\n", k+1, l+1);
                	} else {
                    	printf("Não ha reserva nessa mesa.\n");
                	}
                	temReserva=-1;
            	}else{
            		printf("Nenhuma reserva encontrada para excluir.\n");
				}
            break;
            case 5:
            	getchar();
            	system("cls");
            	printf("Alteração de reserva");
                printf("Informe a fileira da mesa a ser alterado (1-%d): \n", lin);
        		scanf("%d", &k);
        		while(k<1 || k>30){
        			printf("Valor inválido!\nInforme a fileira entre 1 e %d: \n", lin);
    				scanf("%d", &k);
        		}
        		k=k-1;
        		printf("Informe a mesa a ser alterado da fileira %d de (1-%d): \n",k+1, col);
        		scanf("%d", &l);
				while(l<1 || l>30){
        			printf("Valor inválido!\nInforme a mesa entre 1 e %d: da flieira %d \n", col,k+1);
    				scanf("%d", &l);
        		}
        		l=l-1;
                
				if (k+1 > 0 && k+1 <= lin && l+1 > 0 && l+1 <= col && mat[k][l] == 'R') {
					
                    printf("Informe a nova linha da mesa (1-%d ): ", lin);
                    scanf("%d", &novoK);
                    
                    while(novoK<1 || novoK>30){
        				printf("Valor inválido!\nInforme a fileira %d entre 1 e %d: \n", lin);
    					scanf("%d", &novoK);
        			}
        			novoK= novoK-1;
        			
					printf("Informe a nova mesa da fileira %d entre (1-%d ): ",novoK+1,col);
                    scanf("%d", &novoL);
                    while(novoL<1 || novoL>30){
        				printf("Valor inválido!\nInforme a mesa da fileira %d entre 1 e %d: \n",novoK+1,col);
    					scanf("%d", &novoL);
        			}
        			novoL=novoL-1;
                    printf("Digite o novo nome da pessoa que reservou\n");
					scanf("%s",&nome[novoK][novoL]);

                    if (novoK+1 > 0 && novoK+1 <=lin && novoL+1 > 0 && novoL+1 <= col && mat[novoK][novoL] == 'L') {
                        mat[k][l] = 'L';
                        mat[novoK][novoL] = 'R';
                        
                        printf("Reserva alterada para fileira [%d]  e a mesa [%d]!\n", novoK+1, novoL+1);
                    } else {
                        printf("A nova mesa já esta reservada ou e invalida!\n");
                   	}
                } else {
                    printf("Não há reserva nessa mesa ou a posicao esta invalida!\n");
                }
            break;
            case 6:
    			system("cls");
    			printf("Verificando reservas...\n");

    			for(i = 0; i < lin; i++){
        			for(j = 0; j < col; j++){
            			if (mat[i][j] == 'R') {
                			temReserva = 1; 
                			break;
            			}
        			}
    			}

    			if (temReserva==1) {
        			printf("Removendo todas as reservas...\n");
        			for(i = 0; i < lin; i++){
            			for(j = 0; j < col; j++){
                			mat[i][j] = 'L';
                			strcpy(nome[i][j], "");
            			}
        			}
        			printf("Todas as reservas foram excluídas!\n");
        			
    			} else {
        			printf("Nenhuma reserva encontrada para excluir.\n");
    			}
			break;


            case 7:
                	printf("Saindo do Sistema\n");
            break;
            default:
            	system("cls");
            	printf("Opção invalida digite novamente");
		}
		getchar();
	}while(op != 7);
	return 0;
}
