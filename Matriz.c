#include<stdio.h>


int main(){
    void Q01();
}

void Q01(){
    int A[5][3],B[5][3],C[5][3],i,j;

    printf("MATRIZ A\n");

    printf("Digite a Matriz A\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("MATRIZ B\n");

    printf("Digite a Matriz B\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
        printf("\n\n");
    }

    printf("Somando as Matrizes");

    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("A soma das matrizes e\n%d",C[i][j]);
        }
        printf("\n ");
    }
}


