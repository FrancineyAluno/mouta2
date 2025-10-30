#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int mat[5][5],i,j,num;

    printf("Matriz preenchida aleatoriamente");
    srand(time(NULL));
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            mat[i][j] = rand()%25+1;
        }
    }
    printf("\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
