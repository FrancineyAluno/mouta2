#include<stdio.h>
#define lin 7
#define col 7
int main(){
    int mat[lin][col],mat1[lin][col],i,j,cont=1;
    //
    printf("matriz normal\n\n");
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            mat[i][j]= cont;
            cont++;
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 90 graus 1\n\n");
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
    printf("\nmatriz 360 graus\n\n");
    for(i=lin-1;i>=0;i--){
        for(j=col-1;j>=0;j--){
            cont--;
            printf("%d ",mat[i][j]);

        }
        printf("\n");
    }
    printf("\nmatriz 270 graus\n\n");
    for(i=lin-1;i>=0;i--){
        for(j=col-1;j>=0;j--){
            printf("%d ",mat[j][i]);

        }
        printf("\n");
    }

}
