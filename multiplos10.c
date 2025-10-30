#include<stdio.h>
#include<stdlib.h>

main(){
    int i,num[15];

    for(i=0;i<=14;i++){
        printf("Digite o %d numero ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<=14;i++){
        if(num[i]%10==0){
            printf("O %d e multiplo de 10\n",i+1);
        }
    }
}
