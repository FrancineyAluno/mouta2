#include<stdio.h>
#include<stdlib.h>

int main(){
	char mat[30][30];
    int i,j,lin,col,mesa,op;
    
	printf("=======Menu de reservas========\n");
			printf("1 - Cadastrar Mesa\n");
			printf("2 - Excluir reservas\n");
			printf("3 - Para sair\n");
			scanf("%d",&op);
			system("cls");		
			
        while(op==1 || op!=3){
    //inicializacao
        for(i=0;i<30;i++){
            for(j=0;j<30;j++){
                mat[i][j] = 'O';
            }
        }
        do{
        	do{
                printf("\n");
                printf("Digite a fileira da mesa\n");
                scanf("%d",&lin);
                printf("Digite a coluna da mesa\n");
                scanf("%d",&col);
            }while(lin < 0 || lin > 30 || col < 0 || col > 30 || mat[lin][col] != 'O');
            
            mat[lin][col] = 'X';
            //impressao da tela
            printf("\n");
            for(i=0;i<30;i++){
                for(j=0;j<30;j++){
                    printf(" %c ",mat[i][j]);
                }
                printf("\n");
            }
                
            
            printf("=======Menu de reservas========\n");
			printf("1 - Cadastrar Mesa\n");
			printf("2 - Excluir reservas\n");
			printf("3 - Para sair das reservas\n");
			scanf("%d",&op);
			system("cls");
        }while(op==1 && op!=3);
        printf("\n");
            for(i=0;i<30;i++){
                for(j=0;j<30;j++){
                    printf(" %c ",mat[i][j]);   
                }
                printf("\n");
            }
    }
}
