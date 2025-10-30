#include<stdio.h>

int main(){
    char mat[3][3];
    int i,j,lin,col,jgd,win,contjgd,op;

    do{
        jgd = 1;
        win = 0;
        contjgd = 0;
    //inicializacao
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                mat[i][j] = ' ';
            }
        }
        do{
            //impressao do jogo
            printf("\n\n\t 0   1   2\n\n");
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                     if(j==0){
                        printf("\t");
                    }
                    printf(" %c ",mat[i][j]);
                    if(j < 2){
                        printf("|");
                    }
                    if(j == 2){
                        printf("   %d",i);
                    }
                }
                if(i < 2){
                    printf("\n\t------------");
                }
                printf("\n");
            }
            do{
                printf("\n");
                printf("Jogadot %d digite a linha da posicao\n",jgd);
                scanf("%d",&lin);
                printf("Jogador %d digite a coluna da posicao\n",jgd);
                scanf("%d",&col);
            }while(lin < 0 || lin > 2 || col < 0 || col > 2 || mat[lin][col] != ' ');

            if(jgd == 1){
                mat[lin][col] = 'O';
                jgd++;
            }else{
                mat[lin][col] = 'X';
                jgd = 1;
            }
            if((mat[0][0]=='O' && mat[0][1]=='O' && mat[0][2]=='O') || (mat[1][0]=='O' && mat[1][1]=='O' && mat[1][2]=='O') || (mat[2][0]=='O' && mat[2][1]=='O' && mat[2][2]=='O')){
                printf("O jogador 1 venceu");
                win = 1;
            }else if((mat[0][0]=='X' && mat[0][1]=='X' && mat[0][2]=='X') || (mat[1][0]=='X' && mat[1][1]=='X' && mat[1][2]=='X') || (mat[2][0]=='X' && mat[2][1]=='X' && mat[2][2]=='X')){
                printf("O jogador 2 venceu");
                win = 1;
            }else if((mat[0][0]=='O' && mat[1][0]=='O' && mat[2][0]=='O') || (mat[0][1]=='O' && mat[1][1]=='O' && mat[2][1]=='O') || (mat[0][2]=='O' && mat[1][2]=='O' && mat[2][2]=='O')){
                printf("O jogador 1 venceu");
                win = 1;
            }else if((mat[0][0]=='X' && mat[1][0]=='X' && mat[2][0]=='X') || (mat[0][1]=='X' && mat[1][1]=='X' && mat[2][1]=='X') || (mat[0][2]=='X' && mat[1][2]=='X' && mat[2][2]=='X')){
                printf("O jogador 2 venceu");
                win = 1;
            }else if(mat[0][0]=='O' && mat[1][1]=='O' && mat[2][2]=='O'){
                printf("O jogador 1 venceu");
                win = 1;
            }else if(mat[0][0]=='X' && mat[1][1]=='X' && mat[2][2]=='X'){
                printf("O jogador 2 venceu");
                win = 1;
            }else if(mat[0][2]=='O' && mat[1][1]=='O' && mat[2][0]=='O'){
                printf("O jogador 1 venceu");
                win = 1;
            }else if(mat[0][2]=='X' && mat[1][1]=='X' && mat[2][0]=='X'){
                printf("O jogador 2 venceu");
                win = 1;
            }
            contjgd++;
        }while(win ==0 && contjgd < 9);
        if(win == 0){
            printf("O jogo empatou");
        }
        printf("Digite 1 para jogar de novo");
        scanf("%d",&op);
    }while(op == 1);
        return 0;
}
