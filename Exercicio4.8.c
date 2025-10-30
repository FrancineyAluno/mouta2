#include<stdio.h>

void main(){
    int i,j,x,y;

    printf("Entre comn o intervalo de 1 ate 20\n");
    scanf("%d\n %d",&x,&y);
    system("cls");

    for(i=1;i<=y;i++){
            printf("\n");
        for(j=1;j<=x;j++){
            printf("%d ",i);
        }
    }
}
