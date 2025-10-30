#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,mat[3][3],vet[3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite os valores da Matriz\n");
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<3;i++){
        printf("Digite os valores do vetor\n");
            scanf("%d",&vet[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==0){
                printf("%d ",mat[i][j]+vet[i]);
            }else if(i==1){
                printf("%d ",mat[i][j]+vet[i]);
            }else if(i==2){
                printf("%d ",mat[i][j]+vet[i]);
            }
        }
        printf("\n");
    }
}
