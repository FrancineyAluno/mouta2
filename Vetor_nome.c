#include<stdio.h>
#include<stdlib.h>

main(){
    char nome[7][50];
    int i;

    for(i=0;i<=6;i++){
        printf("Digite o %d nome ",i+1);
        gets(nome[i]);
    }
    for(i=6;i>=0;i--){
        printf("%d %s \n",i+1,nome[i]);
    }
}
