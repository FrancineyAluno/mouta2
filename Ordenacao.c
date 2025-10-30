#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat[4][4]={{10,4,13,9},{3,30,29,5},{2,11,7,6},{25,0,70,1}},i,j,aux1=100,aux2,op=0;
    do{
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(mat[i][j]>mat[i][j]){
                    aux1 = mat[i][j];
                    aux2 = aux1;
                    mat[i][j]=aux2;
                }
                op++;
            }
        }
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                printf("%2d ",mat[i][j]);
            }
            printf("\n");
        }
    }while(op<=14);
}
