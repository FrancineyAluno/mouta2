#include<stdio.h>
#include<stdlib.h>

void main(){
    int num,soma=0,cont1,cont2;

    printf("digite um valor\n");
    scanf("%d",&num);

    while(num!=0){
        soma = soma+num;
        if(num>0){
            cont1 = cont1+1;
        }else if(num<0){
            cont2 = cont2+1;
        }

    }
}
