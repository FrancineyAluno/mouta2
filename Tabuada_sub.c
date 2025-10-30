#include<stdio.h>
#include<stdlib.h>

void main(){

    int i,j;

     for(i=1;i<=10;i++){
        for(j=1;j<=5;j++){
            printf("%d - %d = %d\t",i+j,j,i);
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=10;i++){
        for(j=6;j<=10;j++){
            printf("%d - %d = %d\t",i+j,j,i);
        }
        printf("\n");
    }
}
