#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,num,fat=1;

    printf("Digite o valor do fatorial\n");
    scanf("%d",&num);
    system("cls");

    for(i=1;i<=num;i++){
        fat = fat*i;
    }
    printf("Valor do Fatorial %d",fat);
}
