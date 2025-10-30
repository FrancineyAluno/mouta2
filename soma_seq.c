#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,x,num,soma=0;

    printf("Digite a sequencia da soma");
    scanf("%d",&x);

    for(i=1;i<=x;i++){
        printf("Digite os valores da soma");
        scanf("%d",&num);

        soma = soma+num;
    }
    printf("A soma e %d ",soma);
}
