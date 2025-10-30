#include<stdio.h>

int main(){
    char mat[3][3];
    int i,j,lin,col,res,contjgd,op;

        res = 1;
        contjgd = 0;
    //inicializacao
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                mat[i][j] = ' ';
            }
        }
            //impressao do jogo
            printf("\n\n\t 0   1   2\n\n");
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    
            
