
#include<stdio.h>
int main(){
    char mat[3][3];
    int i,j,lin,col,jgd,victory,cont,op;
    
	do{
		jgd = 1;
		victory = 0;
		cont = 0;
	    //inicializacao
	    for(i=0;i<3;i++){
	        for(j=0;j<3;j++){
	            mat[i][j] = ' ';
	        }
	    }
	    
	    //impressao do jogo
		    printf("\n\n\t");
			for(i=0;i<3;i++){
		    	printf("%2d  ",i+1);
			}
			printf("\n\n");
		    for(i=0;i<3;i++){
		        for(j=0;j<3;j++){
		            if(j==0){
		                printf("\t");
					}
		            printf("  %c ",mat[i][j]);
		            if(j<2){
		            	printf("|");
		            }
		           	if(j==2){
		            	printf(" %d",i+1);
					}
				}
				if(i<2){
					printf("\n\t-------------- ");
				}
		        printf("\n");    
		    }
	    do{
	    	printf("\n");
		    do{
		    	printf("digite a linha jogador %d\n",jgd);
		    	scanf("%d",&lin);
		    	printf("digite a coluna jogador %d\n",jgd);
		    	scanf("%d",&col);
		    	lin=lin-1;
		    	col=col-1;
		    	getchar();
			}while(lin<0 || lin>3 || col<0 || col>3 || mat[lin][col]!=' ');
			
			if(jgd==1){
				mat[lin][col]='X';
				jgd++;
			}else{
				mat[lin][col]='O';
				jgd--;
			}
			cont++;
			
			//impressao do jogo
		    printf("\n\n\t");
			for(i=0;i<3;i++){
		    	printf("%2d  ",i+1);
			}
			printf("\n\n");
		    for(i=0;i<3;i++){
		        for(j=0;j<3;j++){
		            if(j==0){
		                printf("\t");
					}
		            printf("  %c ",mat[i][j]);
		            if(j<2){
		            	printf("|");
		            }
		           	if(j==2){
		            	printf(" %d",i+1);
					}
				}
				if(i<2){
					printf("\n\t------------");
				}
		        printf("\n");    
		    }
			
			if(mat[0][0]=='X' && mat[0][1]=='X' && mat[0][2]=='X' || 
				mat[1][0]=='X' && mat[1][1]=='X' && mat[1][2]=='X' ||
				mat[2][0]=='X' && mat[2][1]=='X' && mat[2][2]=='X'){
					printf("\nJogador 1 venceu\n");
					victory = 1;
			}
			if(mat[0][0]=='O' && mat[0][1]=='O' && mat[0][2]=='O' || 
				mat[1][0]=='O' && mat[1][1]=='O' && mat[1][2]=='O' ||
				mat[2][0]=='O' && mat[2][1]=='O' && mat[2][2]=='O'){
					printf("\nJogador 2 venceu\n");
					victory = 1;
			}
		    if(mat[0][0]=='X' && mat[1][0]=='X' && mat[2][0]=='X' || 
				mat[0][1]=='X' && mat[1][1]=='X' && mat[2][1]=='X' ||
				mat[0][2]=='X' && mat[1][2]=='X' && mat[2][2]=='X'){
					printf("\nJogador 1 venceu\n");
					victory = 1;
			}
			if(mat[0][0]=='O' && mat[1][0]=='O' && mat[2][0]=='O' || 
				mat[0][1]=='O' && mat[1][1]=='O' && mat[2][1]=='O' ||
				mat[0][2]=='O' && mat[1][2]=='O' && mat[2][2]=='O'){
					printf("\nJogador 2 venceu\n");
					victory = 1;
			}
		    if(mat[0][0]=='X' && mat[1][1]=='X' && mat[2][2]=='X'){
					printf("\nJogador 1 venceu\n");
					victory = 1;
			}
			if(mat[0][0]=='O' && mat[1][1]=='O' && mat[2][2]=='O'){
					printf("\nJogador 2 venceu\n");
					victory = 1;
			}
			if(mat[0][2]=='X' && mat[1][1]=='X' && mat[2][0]=='X'){
					printf("\nJogador 1 venceu\n");
					victory = 1;
			}
			if(mat[0][2]=='O' && mat[1][1]=='O' && mat[2][0]=='O'){
					printf("\nJogador 2 venceu\n");
					victory = 1;
			}
		}while(victory == 0 && cont < 9);
		if(victory == 0){
			printf("\nEmpatou\n");
		}
		do{
			printf("Digite 1 para sair ou 2 para continuar jogando");
			scanf("%d",&op);
		}while(op!=1 && op == 3);
	}while(op !=1 && op == 2);
}
