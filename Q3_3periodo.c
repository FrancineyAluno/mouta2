#include<stdio.h>

int main(){
    int i,j, mat[4][4],soma1=0,soma2=0,soma3=0,soma4=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite os valores da matriz\n");
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==0){
                soma1 = soma1 + mat[i][j];
            }
            if(i==1){
                soma2 = soma2 + mat[i][j];
            }
            if(i==2){
                soma3 = soma3 + mat[i][j];
            }
            if(i==3){
                soma4 = soma4 + mat[i][j];
            }
        }
    }
     printf("linha 1 = %d\n",soma1);
     printf("linha 2 = %d\n",soma2);
     printf("linha 3 = %d\n",soma3);
     printf("linha 4 = %d",soma4);
}

