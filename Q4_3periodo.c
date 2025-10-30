#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,mat1[10][10],mat2[10][10],num;
    int acum1=1,acum2=1;

    printf("Digite o numero de linha e colunas\n");
    scanf("%d",&num);

    printf("Matriz 1\n");
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            printf("[%d][%d] = ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Matriz 2\n");
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            printf("[%d][%d] = ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    system("cls");
    printf("Diagonal principal 1 \n");
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(i==j){
                printf("%d ",mat1[i][j]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Diagonal Secundaria 1\n");
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(i+j==num-1){
                printf("%d ",mat1[i][j]);
                acum1 *=mat1[i][j];
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
     printf("Diagonal Principal 2\n");
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(i==j){
                printf("%d ",mat2[i][j]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Diagonal Secundaria 2\n");
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(i+j==num-1){
                printf("%d ",mat2[i][j]);
                acum2 *=mat2[i][j];

            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("A multplicao da diagonal secundaria 1 e %d\n",acum1);
    printf("A multplicao da diagonal secundaria 2 e %d\n",acum2);
}
