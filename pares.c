#include<stdio.h>
#include<stdlib.h>

main(){
    int i,num[10];

    for(i=0;i<=9;i++){
        printf("Digite o %d numero",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<=9;i++){
        if(num[i]%2==0){
            printf("O %d e par e esta na posicao %d\n",num[i],i+1);
        }
    }
}
