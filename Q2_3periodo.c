#include<stdio.h>

int main(){
    int i,j,mat1[3][3],mat2[3][3],matR[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite os valores da Matriz 1\n");
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite os valores da Matriz 2\n");
            scanf("%d", &mat2[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matR[i][j] = mat1[i][j]*mat2[i][j];
        }
    }
    system("cls");
    printf("Matriz 1\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz 2\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz final\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", matR[i][j]);
        }
        printf("\n");
    }
    return 0;
}

