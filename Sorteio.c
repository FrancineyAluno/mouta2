#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    int i,num[30],num2,cont=0;

    srand(time(NULL));

    printf("Digite a chave\n");
    scanf("%d",&num2);

    for(i=0;i<=29;i++){
        num[i]= rand()%15;
        printf("%d\n",num[i]);
    }
    for(i=0;i<=29;i++){
        if(num[i]==num2){
            printf("A chave foi encontrada na posicao %d\n",i+1);
            cont++;
        }
    }
    printf("a chave apareceu %d vezes\n",cont);
}
