#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    int i,num;

    setlocale(LC_ALL,"Portuguese");

    printf("Qual o limite da contagem");
    scanf("%d",&num);

    printf("Ímpares\t Pares\n");

    for(i=1;i<=num;i++){
        if(i%2==0){
            printf(" %d \n",i);
        }else{
            printf(" %d \t  ",i);
        }
    }
}
