#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,num=0;
    printf("Digite ate onde vai a sequencia");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("%d ",i);
    }
    printf("FIM");
}
