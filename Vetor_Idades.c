#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i,idade[8],acum=0,maior=0,media=0;

    for(i=0;i<=7;i++){
        printf("Digite a idades da %d pessoa",i+1);
        scanf("%d",&idade[i]);
    }
    for(i=0;i<=7;i++){
        acum=acum+idade[i];
        media = acum/8;
        if(idade[i]>25){
            printf("Na %d posicao e maior a 25 anos\n",i+1);
        }
        if(idade[i] > maior){
            maior = idade[i];
            printf("A idade maior e %d e sua posicao e %d\n",maior,i+1);
        }
    }
    printf("A media e %d ",media);
}
